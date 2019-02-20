#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>
#include <list>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int x, y;
    cin >> x >> y;
    if (y % 2 == 0) {
        cout << "possible" << endl;
    } else {
        cout << "impossible" << endl;
    }
    return 0;
}