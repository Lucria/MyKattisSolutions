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

using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define M_PI 3.14159265358979323846

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    double radius;
    cin >> radius;
    cout << fixed;
    cout << setprecision(6) << M_PI*pow(radius,2) << endl;
    cout << setprecision(6) << (double)2*pow(radius,2) << endl;
    return 0;
}