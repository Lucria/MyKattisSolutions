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
    int messages; cin >> messages; cin.ignore();
    unordered_map< string, vector<string> > allwords;
    unordered_map< string, set <string> > norepeatwords;
    for(int i = 0; i < messages; i++) {
        string input;
        getline(cin, input);
        istringstream iss(input);
        string token;
        string name;
        getline(iss, name, ' ');
        while (getline(iss, token, ' ')) {
            allwords[name].push_back(token);
            norepeatwords[name].insert(token);
        }
    }

    // Find words used by everyone
    unordered_map<string, int> countingoccurance;
    for (auto i : norepeatwords) {
        for (auto j : i.second) {
            countingoccurance[j] += 1;
        }
    }
    unordered_map <string, int> wordsusedbyall;
    for (auto i : countingoccurance) {
        if (i.second == allwords.size()) {
            wordsusedbyall.insert(make_pair(i.first, 0));
        }
    }

    // Adding counter to words that are used by everyone
    unordered_map<string, int> countingwords;
    for (auto &i : wordsusedbyall) {
        for (auto &j : allwords) {
            for (auto &k : j.second) {
                if (k == i.first) {
                    i.second++;
                    // cout << i.second << endl;
                }
            }
        }
    }
    // for (auto j : allwords) {
    //     for (auto k : j.second) {
    //         cout << k << " ";
    //     }
    //     cout << endl;
    // }

    // Output
    if (wordsusedbyall.empty()) {
        cout << "ALL CLEAR" << endl;
        return 0;
    }
    vector <pair <int, string>> output; // Can consider using multiset as well
    for (auto i : wordsusedbyall) {
        output.push_back(make_pair(i.second , i.first));
        // cout << "DEBUGGING" << endl;
        // cout << i.first << " " << i.second << endl;
    }
    sort(output.begin(), output.end(), [](pair<int, string> a, pair<int, string> b) {
        return a.first >= b.first;
    });
    for (auto i: output) {
        cout << i.second << endl;
    }
    
    return 0;
}