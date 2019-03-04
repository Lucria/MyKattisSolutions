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

int findnode(int p, int q) {
    if (p == q) {
        return 1;
    } else if (p < q) {
        return 2 * findnode(p, q - p);
    } else if (p > q) {
        return 2 * findnode(p - q, q) + 1;
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int queries;
    cin >> queries;
    for (int i = 0; i < queries; i++) {
        int setnumber;
        int p, q;
        char dump;
        cin >> setnumber >> p >> dump >> q;
        cout << setnumber << " ";
        cout << findnode(p , q) << endl;
    }
    return 0;
}