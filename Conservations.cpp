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
int numstages, numdependencies;

int count(vector<int> dependencycount, vector<vector<int>> adjMat, vector<int> allStages, int n) {
    queue<int> office1;
    queue<int> office2;
    for (int k = 0; k < numstages; k++) {
        if (dependencycount[k] == 0) {
            if (allStages[k] == 0) {
                office1.push(k);
            } else if (allStages[k] == 1) {
                office2.push(k);
            }
        }
    }
    int currPos = n;
    int swaps = 0;
    while (!office1.empty() || !office2.empty()) {
        if (currPos == 0) {
            while (!office1.empty()) {
                int top = office1.front();
                office1.pop();
                for (auto i : adjMat[top]) {
                    dependencycount[i]--;
                    if (dependencycount[i] == 0) {
                        if (allStages[i] == 0) {
                            office1.push(i);
                        } else if (allStages[i] == 1) {
                            office2.push(i);
                        }
                    }
                }
            }
        } else if (currPos == 1) {
            while (!office2.empty()) {
                int top = office2.front();
                office2.pop();
                for (auto i : adjMat[top]) {
                    dependencycount[i]--;
                    if (dependencycount[i] == 0) {
                        if (allStages[i] == 0) {
                            office1.push(i);
                        } else if (allStages[i] == 1) {
                            office2.push(i);
                        }
                    }
                }
            }
        }
        currPos = 1 - currPos;
        swaps++;
    }
    return swaps - 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int cases;
    cin >> cases;
    while (cases--) {
        cin >> numstages >> numdependencies;
        vector<int> allStages(numstages);
        for (int i = 0; i < numstages; i++) {
            int input;
            cin >> input;
            allStages[i] = input - 1;
        }
        vector<vector<int>> adjMat(numstages);
        vector<int> dependencycount;
        dependencycount.resize(numstages, 0);
        for (int j = 0; j < numdependencies; j++) {
            int a, b;
            cin >> a >> b;
            a--;
            b--;
            adjMat[a].push_back(b);
            dependencycount[b]++;
        }
        int swaps = min(count(dependencycount, adjMat, allStages, 0), count(dependencycount, adjMat, allStages, 1));
        cout << swaps << endl;
    }
    return 0;
}