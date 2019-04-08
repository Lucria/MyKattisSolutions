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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int cases; cin >> cases;
    while (cases--) {
        int numbuttons, desiredtime;
        cin >> numbuttons >> desiredtime;
        vector<int> alltimes;
        for (int i = 0; i < numbuttons; i++) {
            int timechange;
            cin >> timechange;
            alltimes.push_back(timechange);
        }
        vector<int> presses;
        presses.resize(3601, INT32_MAX);
        presses[0] = 0;
        queue<int> bfs;
        bfs.push(0);
        while (!bfs.empty()) {
            int currenttime = bfs.front();
            bfs.pop();
            for (auto &i : alltimes) {
                // Iterate through alltimes, simulating pressing each button available once
                int nexttime = currenttime + i;
                // Remove possibility of getting negative timer
                nexttime = max(0, nexttime);
                // Remove possibility of exceeding maximum time limit
                nexttime = min(3600, nexttime);
                if (presses[nexttime] > presses[currenttime] + 1) {
                    presses[nexttime] = presses[currenttime] + 1;
                    bfs.push(nexttime);
                }
            }
        }
        // Will never undercook, will always be more than the desired cooking time
        for (int i = desiredtime; i < 3601; i++) {
            if (presses[i] != INT32_MAX) {
                cout << presses[i] << " " << i - desiredtime << endl;
                break;
            }
        }
    }
    return 0;
}