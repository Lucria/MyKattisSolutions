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
    vector <int> lengths;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    lengths.push_back(a);
    lengths.push_back(b);
    lengths.push_back(c);
    lengths.push_back(d);
    sort(lengths.begin(), lengths.end());
    cout << lengths[0] * lengths[2] << endl;
    return 0;
}