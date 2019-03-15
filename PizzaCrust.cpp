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

using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define M_PI 3.14159265358979323846

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int R, C;
    cin >> R >> C;
    int squared = pow(R, 2);
    int hascheese = pow(R - C, 2);
    cout << fixed << setprecision(6) << (double)hascheese / squared * 100 << endl;
    return 0;
}