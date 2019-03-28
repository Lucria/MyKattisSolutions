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
    int cases; cin >> cases;
    while (cases--) {
        int numcities, numpilots;
        cin >> numcities >> numpilots;
        for (int i = 0; i < numpilots; i++) {
            int citya, cityb;
            cin >> citya >> cityb;
        }
        cout << numcities - 1 << endl; 
        // Minimum number of edges required to traverse entire connected graph is 
        // Number of nodes - 1;
    }
    return 0;
}