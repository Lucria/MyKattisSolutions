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
    int periods;
    cin >> periods;
    double output = 0;
    while (periods--) {
        double quality, years;
        cin >> quality >> years;
        output = output + quality * years;
    }
    cout << output << endl;
    return 0;
}