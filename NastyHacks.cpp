#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <cstring>
#include <string.h>
#include <algorithm>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int donotrevenue, expectedrevenue, cost;
        cin >> donotrevenue >> expectedrevenue >> cost;
        if (expectedrevenue - donotrevenue > cost) {
            cout << "advertise" << endl;
        } else if (expectedrevenue - donotrevenue == cost) {
            cout << "does not matter" << endl;
        } else {
            cout << "do not advertise" << endl;
        }
    }
    return 0;
}
