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
# define M_PI 3.14159265358979323846

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int cases;
    cin >> cases;
    while (cases--) {
        double initvelo, angle, x, lowerh, upperh;
        cin >> initvelo >> angle >> x >> lowerh >> upperh;
        double time = x / initvelo / cos(angle * M_PI / 180);
        double ypos = (initvelo * time * sin(angle * M_PI / 180)) - (0.5 * 9.81 * pow(time, 2));
        // cout << "Time " << time << endl;
        // cout << "Cannonball Y pos " <<  ypos << endl;
        if ((upperh - ypos < 1) || (ypos - lowerh < 1)) {
            cout << "Not Safe" << endl;
        } else {
            cout << "Safe" << endl;
        }
    }
    return 0;
}