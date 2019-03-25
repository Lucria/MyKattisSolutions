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
    int numcategories; cin >> numcategories; cin.ignore();
    unordered_map<string, list<string>> allcategories;
    unordered_map<string, int> counting;
    for (int i = 0; i < numcategories; i++) {
        string categories;
        int numwords;
        cin >> categories >> numwords;
        // counting.push_back(make_pair(categories, 0));
        counting[categories] = 0;
        for (int j = 0; j < numwords; j++) {
            string word;
            cin >> word;
            allcategories[categories].push_back(word);
        }
    }
    string input;
    int maxi = 0;
    while (cin >> input) {
        for (auto i : allcategories) {
            for (auto j : i.second) {
                if (input == j) {
                    counting[i.first]++;
                    maxi = max(maxi, counting[i.first]);
                }
            }
        }
    }
    vector <string> selected;
    for (auto i : counting) {
        if (i.second == maxi) {
            selected.push_back(i.first);
        }
    }
    sort(selected.begin(), selected.end());
    for (auto i : selected) {
        cout << i << endl;
    }
    // cout << maxi << endl;
    // for (auto i : counting) {
    //     cout << i.first << endl;
    //     cout << i.second << endl;
    // }
    return 0;
}