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

void check(int i, vector<list<int>> &al, vector<bool> &visited) {
    visited[i] = true;
    for (auto j : al[i]) {
        if (!visited[j]) {
            check(j, al, visited);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int numcities; cin >> numcities;
    for (int i = 0; i < numcities; i++) {
        vector<list<int>> al;
        int numendpoints; cin >> numendpoints;
        al.resize(numendpoints);
        int r; cin >> r;
        for (int j = 0; j < r; j++) {
            int a, b; cin >> a >> b;
            // cout << "DEBUGGING" << a << " " << b << endl;
            al[a].push_back(b);
            al[b].push_back(a);
        }
        queue <int> temp;
        vector<bool> visited;
        visited.resize(numendpoints, false);
        // temp.push(0);
        // while(!temp.empty()) {
        //     int current = temp.front();
        //     temp.pop();
        //     // cout << current << endl;
        //     for (auto i = al[current].begin(); i != al[current].end(); i++) {
        //         // cout << *i << endl;
        //         if (!visited[*i]) {
        //             visited[*i] = true;
        //             temp.push(*i);
        //         }
        //     }
        // }
        // cout << "DEBUG" << endl;
        int counter = 0;
        for (int i = 0; i < numendpoints; i++) {
            if (!visited[i]) {
                counter++;  
                // visited[i] = true;
                check(i, al, visited);
            }
        }
        cout << counter - 1 << endl;
    }
    return 0;
}