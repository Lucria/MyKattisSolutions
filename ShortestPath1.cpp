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
    int numNodes, numEdges, numQueries, start;
    while (cin >> numNodes && cin >> numEdges && cin >> numQueries && cin >> start) {
        vector<vector<pair<int, int>>> adjList(numNodes);
        if (numNodes == 0 && numEdges == 0 && numQueries == 0 && start == 0) {
            break;
        }
        for (int i = 0; i < numEdges; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            adjList[u].push_back({v, w});
        }
        vector<int> dist(numNodes, INT32_MAX);
        dist[start] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, start});
        while (!pq.empty()) {
            int d = pq.top().first; // Current distance travelled at this vertex
            int u = pq.top().second; // Current vertex
            pq.pop();
            if (dist[u] < d) continue; // Prevent degeneration to Bellman Ford
            for (auto &v_weight : adjList[u]) {
                int v = v_weight.first; // Neighbour vertex
                int w = v_weight.second; // Weight of edge
                if (dist[u] + w < dist[v]) { // Check if can relax edge
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            }
        }
        for (int i = 0; i < numQueries; i++) {
            int queryNode;
            cin >> queryNode;
            if (dist[queryNode] == INT32_MAX) {
                cout << "Impossible" << endl;
            } else {
                cout << dist[queryNode] << endl;
            }
        }
        cout << endl;
    }
    return 0;
}