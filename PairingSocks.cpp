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
    int n; cin >> n; cin.ignore();
    stack <int> oripile;
    stack <int> temp;
    for (int i = 0; i < 2*n; i++) {
        int type;
        cin >> type;
        oripile.push(type);
    }
    int counter = 0;
    while (!oripile.empty()) {
        int currenttop = oripile.top();
        temp.push(currenttop);
        oripile.pop();
        counter++;
        while (!temp.empty() && !oripile.empty() && (oripile.top() == temp.top())) {
            oripile.pop();
            temp.pop();
            counter++;
        }
    }
    // cout << "DEBUGG" << endl;
    if (!temp.empty()) {
        cout << "impossible" << endl;
    } else {
        cout << counter << endl;
    }
    return 0;
}