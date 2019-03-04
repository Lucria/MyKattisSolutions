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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int cases;
    cin >> cases;
    while (cases--) {
        int sum = 0;
        int prev, curr;
        cin >> prev >> curr;
        while (curr != 0) {
            if (curr > prev * 2) {
                sum = sum + curr - 2 * prev;
                prev = curr;
                cin >> curr;
            } else {
                prev = curr;
                cin >> curr;
            }
        }
        cout << sum << endl;
    }
    return 0;
}