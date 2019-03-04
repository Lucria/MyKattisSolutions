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

double maxArea(double a, double b, double c, double d) {
    double s = (a + b + c + d) / 2;
    return sqrt((s-a)*(s-b)*(s-c)*(s-d));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << fixed;
    cout << setprecision(16) << maxArea(a, b, c, d) << endl;
    return 0;
}