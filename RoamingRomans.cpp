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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    double distance;
    cin >> distance;
    cout << (int)round(1000 * distance * 5280 / 4854) << endl;
    //cout << round(0.5) << endl;
    return 0;
}