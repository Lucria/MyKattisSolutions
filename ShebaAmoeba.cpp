// Created by Jerry
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
#define M_PI 3.14159265358979323846

int main() {
    vector<int> changex {0 , 1 , 0 , -1 , 1 , -1 , 1 , -1};
    vector<int> changey {1 , 0 , -1 , 0 , 1 , -1 , -1 , 1};
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int canvasx, canvasy;
    cin >> canvasx >> canvasy; cin.ignore();
    vector<vector<char>> canvas;
    canvas.resize(canvasx);
    for (int i = 0; i < canvasx; i++) {
        for (int j = 0; j < canvasy; j++) {
            char input;
            cin >> input;
            canvas[i].push_back(input);
        }
    }
    vector<vector<bool>> visited;
    visited.resize(canvasx, vector<bool>(canvasy, false));
    int counter = 0;
    for (int i = 0; i < canvasx; i++) {
        for (int j = 0; j < canvasy; j++) {
            if (!visited[i][j]) {
                if (canvas[i][j] == '#') {
                    counter++;
                    // * BFS
                    visited[i][j] = true;
                    queue<pair<int, int>> storage;
                    storage.push(make_pair(i, j));
                    while(!storage.empty()) {
                        int currentx = storage.front().first;
                        int currenty = storage.front().second;
                        storage.pop();
                        for (int a = 0; a < 8; a++) {
                            if ((currentx + changex[a] >= canvasx) || (currentx + changex[a] < 0)) {
                                continue;
                            }
                            if ((currenty + changey[a] >= canvasy) || (currenty + changey[a] < 0)) {
                                continue;
                            }
                            if (canvas[currentx + changex[a]][currenty + changey[a]] == '#' && !visited[currentx + changex[a]][currenty + changey[a]]) {
                                visited[currentx + changex[a]][currenty + changey[a]] = true;
                                storage.push(make_pair(currentx + changex[a], currenty + changey[a]));
                            }
                        }
                    }
                }
            }
        }
    }
    cout << counter << endl;

    // // For checking output
    // cout << endl << endl;
    // for (int i = 0; i < canvasx; i++) {
    //     for (int j = 0; j < canvasy; j++) {
    //         cout << canvas[i][j];
    //     }
    //     cout << endl;
    // }
    return 0;
}