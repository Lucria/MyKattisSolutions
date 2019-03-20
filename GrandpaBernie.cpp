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
    int trips; cin >> trips; cin.ignore();
    map<string, vector<int>> journeys;
    while(trips--) {
        string country;
        int year;
        cin >> country >> year;
        journeys[country].push_back(year);
    }
    for (auto &i : journeys) {
        sort(i.second.begin(), i.second.end());
    }

    // for (auto i : journeys) {
    //     cout << i.first << endl;
    //     for (auto j : i.second) {
    //         cout << j << endl;
    //     }
    // }
    int queries; cin >> queries; cin.ignore();
    while(queries--) {
        string quercountry;
        int quernum;
        cin >> quercountry >> quernum;
        cout << journeys[quercountry][quernum-1] << endl;
    }
    return 0;
}