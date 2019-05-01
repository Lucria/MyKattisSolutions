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
unordered_map<string, list<string>> adjList;
unordered_map<string, bool> visited;
vector<string> topoSort;

void dfs(string query) {
    visited[query] = true;
    for (auto &i : adjList[query]) {
        if (visited.find(i) == visited.end()) {
            dfs(i);
        }
    }
    topoSort.push_back(query);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int numRules;
    cin >> numRules;
    cin.ignore();
    for (int i = 0; i < numRules; i++) {
        string input;
        getline(cin, input);
        istringstream iss(input);
        string fileName;
        iss >> fileName;
        fileName.pop_back(); // This is to remove the :
        string dependencies;
        while (iss >> dependencies) {
            adjList[dependencies].push_back(fileName);
        }
    }
    string query;
    cin >> query;

    // DFS
    dfs(query);
    reverse(topoSort.begin(), topoSort.end());
    for (auto &v : topoSort) {
        cout << v << endl;
    }
    return 0;
}