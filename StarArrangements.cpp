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
#include <set>
#include <queue>

using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define M_PI 3.14159265358979323846

bool func(int s, int i, int sum) {
    if (s % (i + sum) == 0 || s % (i + sum) == i) {
        return true;
    } else {
        return false;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int s;
    cin >> s;
    cout << s << ":" << endl;
    for (int i = 2; i <= (s+1) / 2; i++ ) {
        for (int j = -1; j <= 0; j++) {
            if (func(s, i, i+j)) {
                cout << i << "," << i+j << endl;
            }
        }
    }
    return 0;
}