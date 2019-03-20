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
    string treename;
    map <string, int> output;
    double total = 0;
    while (getline(cin, treename)) {
        output[treename]++;
        total++;
    }
    for (auto i : output) {
        cout << fixed << setprecision(4) << endl;
        cout << i.first << " " << i.second / total * 100 << endl;
    }
    return 0;
}