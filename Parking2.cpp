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

typedef vector<int> vi;
typedef long long ll;
#define M_PI 3.14159265358979323846

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int cases;
    cin >> cases;
    while (cases--) {
        int stores;
        cin >> stores;
        vector<int> map;
        int maxi = 0;
        int mini = 100;
        for(int i = 0; i < stores; i++) {
            int position;
            cin >> position;
            map.push_back(position);
            maxi = max(maxi, position);
            mini = min(mini, position);
        }
        cout << (maxi-mini) * 2 << endl;
    }
    return 0;
}