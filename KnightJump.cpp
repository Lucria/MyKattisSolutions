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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<int> changex{2, 2, -2, -2, 1, -1, 1, -1};
    vector<int> changey{1, -1, 1, -1, 2, 2, -2, -2};
    vector<string> canvas;
    int dimension;
    cin >> dimension;
    cin.ignore();

    for (int i = 0; i < dimension; i++) {
        string input;
        getline(cin, input);
        canvas.push_back(input);
    }
    int knightX, knightY;
    for (int j = 0; j < dimension; j++) {
        for (int i = 0; i < dimension; i++) {
            if (canvas[j][i] == 'K') {
                knightX = j;
                knightY = i;
            }
        }
    }
    queue<pair<int, int>> q;
    vector<vector<int>> dist;
    dist.resize(dimension, vector<int>(dimension, -1));
    dist[knightX][knightY] = 0;
    q.push({knightX, knightY});
    while (!q.empty()) {
        int posX = q.front().first;
        int posY = q.front().second;
        q.pop();
        // * Change position and check if got wall, if valid, push into queue and update distance
        for (int a = 0; a < 8; a++) {
            if ((posX + changex[a] >= dimension) || (posX + changex[a] < 0)) {
                continue;
            }
            if ((posY + changey[a] >= dimension) || (posY + changey[a] < 0)) {
                continue;
            }
            if (canvas[posX + changex[a]][posY + changey[a]] != '#' &&
                (dist[posX + changex[a]][posY + changey[a]] == -1)) {
                dist[posX + changex[a]][posY + changey[a]] = dist[posX][posY] + 1;
                q.push({posX + changex[a], posY + changey[a]});
            }
        }
    }
    cout << dist[0][0] << endl;
    return 0;
}