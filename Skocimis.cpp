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
    int a, b, c;
    cin >> a >> b >> c;
    int counter = 0;
    if (c - b > b - a) {
        cout << c - b - 1 << endl;
    } else {
        cout << b - a - 1 << endl;
    }
    return 0;
}