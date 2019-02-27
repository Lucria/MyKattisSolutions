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
    int cases;
    cin >> cases;
    while (cases--) {
        int trips;
        cin >> trips;
        int counter = 0;
        set<string> journey;
        for (int i = 0; i < trips; i++) {
            string city;
            cin >> city;
            journey.insert(city);
        }
        cout << journey.size() << endl;
    }
    return 0;
}