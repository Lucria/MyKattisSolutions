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
    int numhouses, deployednetwork;
    cin >> numhouses >> deployednetwork;
    // Adjacency List
    vector<list <int>> network;
    network.resize(numhouses);
    for (int i = 0; i < deployednetwork ; i++)
    {
        int a, b;
        cin >> a >> b;
        // 0 based indexing
        network[a-1].push_back(b-1);
        network[b-1].push_back(a-1);
        // cout << a-1 << b-1 << endl;
    }
    // DFS uses stack
    // BFS uses queue
    // Traversal
    queue <int> temp;
    vector<int> visited;
    visited.assign(numhouses, 0);
    visited[0] = 1;
    
    temp.push(0);
    while (!temp.empty()) {
        int current = temp.front();
        // cout << "test " << current << endl;
        temp.pop();
        for (auto i = network[current].begin(); i != network[current].end(); i++) {
            // cout << *i << endl;
            // cout << visited[*i] << endl;
            if (visited[*i] == 0) {
                // cout << "Executed" << endl;
                temp.push(*i);
                visited[*i] = 1;
            }
        }
    }
    bool allconnected = true;
    for (int i = 0; i < numhouses; i++) {
        if (visited[i] == 0) {
            allconnected = false;
            cout << i + 1 << endl;
        }
    }
    if (allconnected) {
        cout << "Connected" << endl;
    }
    return 0;
}