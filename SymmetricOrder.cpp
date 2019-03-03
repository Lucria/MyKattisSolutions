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
    int setcounter = 1;
    int cases;
    while(cin >> cases) {
        if (cases == 0) {
            return 0;
        }
        vector <string> allnames;
        for (int i = 0; i < cases; i++) {
            string temp;
            cin >> temp;
            allnames.push_back(temp);
        }
        cout << "SET " << setcounter << endl;
        for (int i = 0; i < cases; i++) {
            if (i % 2 == 0) {
                cout << allnames[i] << endl;
            }
        }
        for (int i = allnames.size() - 1; i > 0; i--) {
            if (i % 2 != 0) {
                cout << allnames[i] << endl;
            }
        }
        setcounter++;
    }
    return 0;
}