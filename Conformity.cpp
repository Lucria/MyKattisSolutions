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
    int students; cin >> students;
    int maxi = 0;
    multiset<vector<string>> allstudents;
    for (int i = 0; i < students; i++) {
        vector<string> combinations;
        for (int j = 0; j < 5; j++) {
            string input; cin >> input;
            combinations.push_back(input);
        }
        sort(combinations.begin(), combinations.end());
        allstudents.insert(combinations);
        maxi = max(maxi, (int)allstudents.count(combinations));
    }
    int output = 0;
    for (auto i: allstudents) {
        if (allstudents.count(i) == maxi) {
            output++;
        }
    }
    cout << output << endl;
    return 0;
}