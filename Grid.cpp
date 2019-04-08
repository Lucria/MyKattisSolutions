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

bool in(int rows, int columns, int newx, int newy) {
    if (newx >= rows) {
        return false;
    }
    if (newx < 0) {
        return false;
    }
    if (newy >= columns) {
        return false;
    }
    if (newy < 0) {
        return false;
    }
    return true;
}

int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
    int rows, columns;
    cin >> rows >> columns;
    vector <vector <int>> canvas;
    canvas.resize(rows, vector<int>(columns));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            char input; cin >> input;
            canvas[i][j] = input - '0';
//            cout << canvas[i][j] << endl;
        }
    }
    vector<vector<int>> distance;
    queue <pair<int, int>> test;
    distance.resize(rows, vector<int>(columns, INT32_MAX));
    distance[0][0] = 0;
    // * Because uniform weights, therefore can use BFS for SSP
    // * 4 directions to consider
    // * Movement is done in terms of adding factors
    test.push(make_pair(0, 0));
//    int testing = test.front().first;
//    int testing2 = test.front().second;
//    cout << testing << testing2 << endl;
//    int counter = 1;
    while (!test.empty()) {
        int x = test.front().first;
        int y = test.front().second;
//        counter++;
//        cout << x << y << "Counter" << counter << endl;
        int travel = canvas[x][y];
        test.pop(); // * Always remember to pop! Else infinite loop!
        if (in(rows, columns, x - travel, y)) {
            if (distance[x][y] + 1 < distance[x - travel][y]) {
                distance[x-travel][y] = distance[x][y] + 1;
                test.push(make_pair(x - travel, y));
            }
        }
        if (in(rows, columns, x + travel, y)) {
            if (distance[x][y] + 1 < distance[x + travel][y]) {
                distance[x + travel][y] = distance[x][y] + 1;
                test.push(make_pair(x + travel, y));
            }
        }
        if (in(rows, columns, x, y + travel)) {
            if (distance[x][y] + 1 < distance[x][y + travel]) {
                distance[x][y + travel] = distance[x][y] + 1;
                test.push(make_pair(x, y + travel));
            }
        }
        if (in(rows, columns, x, y - travel)) {
            if (distance[x][y] + 1 < distance[x][y - travel]) {
                distance[x][y - travel] = distance[x][y] + 1;
                test.push(make_pair(x, y - travel));
            }
        }
    }

    int output = distance[rows - 1][columns - 1];
    if (output != INT32_MAX) {
        cout << output << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}