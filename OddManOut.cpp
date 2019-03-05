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
#include <map>
#include <unordered_map>

using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define M_PI 3.14159265358979323846

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int cases;
    cin >> cases;
    int caseno = 1;
    while (cases--) {
        int guests;
        cin >> guests;
        unordered_map<int, int> freq;
        while (guests--) {
            int code;
            cin >> code;
            freq[code]++;
        }
        int ans = 0;
        for (auto &i: freq) {
            if (i.second == 1) {
                ans = i.first;
                break;
            }
        }
        /**
         * ! This is Cpp17 decomposition methods!
         */
        // for (auto &[key, value]: freq) {
        //     if (value == 1) {
        //         ans = key;
        //         break;
        //     }
        // }
        cout << "Case #" << caseno++ << ": " << ans << endl;
    }
    return 0;
}
