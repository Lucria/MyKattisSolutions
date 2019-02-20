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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int cases;
    cin >> cases;
    while (cases--) {
        string input;
        cin >> input;
        int side = sqrt(input.length());
        for (int i = side - 1; i >= 0; i--) {
            for (int j = 0; j < side; j++) {
                cout << input[i + j*(side)];
            }
        }
        cout << endl;
    }
    return 0;
}