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
    int colleages; cin >> colleages; cin.ignore();
    unordered_map <string, int> costumes;
    while (colleages--) {
        string input;
        cin >> input;
        costumes[input] += 1;
    }
    vector <pair <string, int> > output;
    int minimum = INT32_MAX;
    for (auto &i : costumes) {
        output.push_back(make_pair(i.first, i.second));
        minimum = min(minimum, i.second);
    }
    // cout << minimum << endl;
    sort(output.begin(), output.end(), [] (pair<string,int> a, pair<string,int> b) {
        return a.first < b.first;
    });
    for (auto &i : output) {
        if (i.second == minimum) {
            cout << i.first << endl;
        }
    }
    return 0; 
}