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
    int N, K; cin >> N >> K;
    vector <pair<ll, int>> allatk;
    vector <pair<ll, int>> alldef;
    vector <pair<ll, int>> allhealth;
    for(int i = 0; i < N; i++) {
        ll attack, defense, health;
        cin >> attack >> defense >> health;
        // cout << "Debugging" << endl;
        // cout << attack << " " << defense << " " << health << endl;
        allatk.push_back(make_pair(attack, i));
        alldef.push_back(make_pair(defense, i));
        allhealth.push_back(make_pair(health, i));
    }
    set<int> selected;
    sort(allatk.rbegin(), allatk.rend());
    sort(alldef.rbegin(), alldef.rend());
    sort(allhealth.rbegin(), allhealth.rend());
    for(int i = 0; i < K; i++) {
        selected.insert(allatk[i].second);
        selected.insert(alldef[i].second);
        selected.insert(allhealth[i].second);
    }
    // cout << K << endl;
    // cout << "DEBUGGING" << endl;
    // for (auto i : selected) {
    //     cout << i << endl;
    // }
    cout << selected.size() << endl;
    return 0;
}