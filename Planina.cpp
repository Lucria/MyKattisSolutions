#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

int main() {
    int input;
    cin >> input;
    int side = 3;
    int difference = input - 1;
    for (int i = 0; i < difference; i++) {
        side*=2;
        side -= 1;
    }
    cout << (int)pow(side, 2) << endl;
    return 0;
}