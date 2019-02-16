#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <cstring>
#include <string.h>
#include <algorithm>
#include <numeric>

using namespace std;

int gcd(int a, int b) {
    int c = a % b;
    while (c != 0) {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int main() {
    int top, bottom;
    char junk;
    cin >> top;
    cin >> junk;
    cin >> bottom;
    double newtop = top - bottom * 32;
    newtop *= 5;
    bottom *= 9;

    int a = gcd((int) newtop, bottom);
    newtop /= a;
    bottom /= a;
    if (bottom == 0) {
        newtop = 1;
    }
    if (newtop == 0) {
        bottom = 1;
    }
    if (bottom < 0) {
        newtop *= -1;
        bottom *= -1;
    }

    cout << (int) newtop << "/" << bottom;
    return 0;
}

