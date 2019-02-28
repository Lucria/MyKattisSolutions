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
#include <sstream>
#include <map>

using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define M_PI 3.14159265358979323846

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    map <char, int> temp;
    string input;
    while (cin >> input) {
        temp[input[0]]++;
    }

    int maxi = 0;
    for (auto i : temp) {
        maxi = max(maxi, i.second);
    }
    cout << maxi << endl;
    return 0;
}