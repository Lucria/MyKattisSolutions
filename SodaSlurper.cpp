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
    int emptystart, during, required;
    cin >> emptystart >> during >> required;
    int total = emptystart + during;
    int count = 0;
    while (total >= required) {
        int quotient = total / required;
        int remainder = total % required;
        count += quotient;
        // cout << "Total" << total << endl;
        // cout << "Quotient" << quotient << endl;
        // cout << count << endl;
        total /= required;
        total += remainder; 
    }
    cout << count << endl;
    return 0;
}