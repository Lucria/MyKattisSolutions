// Created by Lucria
#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>
#include <sstream>
#include <list>
#include <stack>
#include <set>
#include <queue>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef pair<int, int> pii;
#define M_PI 3.14159265358979323846

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    vi changex {0, 1, 0, -1};
    vi changey {1, 0, -1, 0};

    int row, column;
    cin >> row >> column; cin.ignore();
    vector<string> canvas;
    for(int i = 0; i < row; i++) {
        string input;
        getline(cin, input);
        canvas.push_back(input);
    }
    queue <pii> firequeue;
    vector <vi> firedistance;
    firedistance.resize(row, vi(column, -1));
    queue <pii> joequeue;
    vector <vi> joedistance;
    joedistance.resize(row, vi(column, -1));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (canvas[i][j] == 'J') {
                joequeue.push({i, j});
                joedistance[i][j] = 0;
            } else if (canvas[i][j] == 'F') {
                firequeue.push({i, j});
                firedistance[i][j] = 0;
            }
        }
    }

    while (!joequeue.empty()) {
        int x = joequeue.front().first;
        int y = joequeue.front().second;
        joequeue.pop();
        for (int a = 0; a < 4; a++) {
            int newx = x + changex[a];
            int newy = y + changey[a];
            if (newx >= 0 && newx < row && newy >= 0 && newy < column && canvas[newx][newy] == '.' && joedistance[newx][newy] == -1) {
                joedistance[newx][newy] = 1 + joedistance[x][y];
                joequeue.push({newx, newy});
            }
        }
    }

    while (!firequeue.empty()) {
        int x = firequeue.front().first;
        int y = firequeue.front().second;
        firequeue.pop();
        for (int a = 0; a < 4; a++) {
            int newx = x + changex[a];
            int newy = y + changey[a];
            if (newx >= 0 && newx < row && newy >= 0 && newy < column && canvas[newx][newy] == '.' && firedistance[newx][newy] == -1) {
                firedistance[newx][newy] = 1 + firedistance[x][y];
                firequeue.push({newx, newy});
            }
        }
    }

    int answer = INT32_MAX;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j += column - 1) {
            if (joedistance[i][j] != -1 && (joedistance[i][j] < firedistance[i][j] || firedistance[i][j] == -1)) {
                answer = min(answer, joedistance[i][j] + 1);
            }
        }
    }
    
    for (int i = 0; i < row; i += row - 1) {
        for (int j = 0; j < column; j++) {
            if (joedistance[i][j] != -1 && (joedistance[i][j] < firedistance[i][j] || firedistance[i][j] == -1)) {
                answer = min(answer, joedistance[i][j] + 1);
            }
        }
    }

    if (answer == INT32_MAX) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        cout << answer << endl;
    }
    return 0;
}