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
    string said;
    string required;
    cin >> said >> required;
    if (said.length() < required.length()) {
        cout << "no" << endl;
    } else {
        cout << "go" << endl;
    }
    return 0;
}