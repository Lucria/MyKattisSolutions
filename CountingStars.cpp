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
#define M_PI 3.14159265358979323846

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n, m;
    int casecounter = 1;
    while(cin >> m >> n) {
        cin.ignore();
        vector<string> canvas;
        for (int i = 0; i < m; i++) {
            string input;
            getline(cin, input);
            canvas.push_back(input);
        }
        vector< vector<bool> > visited;
        visited.resize(m, vector<bool>(n, false));
        int counter = 0;

        // cout << "DEBUGGING OUTPUT" << endl << endl;
        // for (int i = 0; i < m; i++) {
        //     for (int j = 0 ; j < n ; j++) {
        //         cout << canvas[i][j];
        //     }
        //     cout << endl;
        // }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!visited[i][j]) {
                    if (canvas[i][j] == '-') {
                        counter++;
//                        cout << i << " " << j << endl;
                        queue <pair<int, int>> q;
                        q.push(make_pair(i, j));
                        while (!q.empty()) {
                            int x = q.front().first;
                            int y = q.front().second;
                            q.pop();
                            if (x + 1 < m && canvas[x+1][y] == '-' && !visited[x+1][y]) {
                                visited[x+1][y] = true;
                                q.push(make_pair(x+1 , y));
                            }
                            if (x - 1 >= 0 && canvas[x-1][y] == '-' && !visited[x-1][y]) {
                                visited[x-1][y] = true;
                                q.push(make_pair(x-1 , y));
                            }
                            if (y + 1 < n && canvas[x][y+1] == '-' && !visited[x][y+1]) {
                                visited[x][y+1] = true;
                                q.push(make_pair(x , y+1));
                            }
                            if (y - 1 >= 0 && canvas[x][y-1] == '-' && !visited[x][y-1]) {
                                visited[x][y-1] = true;
                                q.push(make_pair(x , y-1));
                            }
                        }
                    }
                }
            }
        }
        cout << "Case " << casecounter << ": " << counter << endl;
        ++casecounter;
    }
    
    return 0;
}