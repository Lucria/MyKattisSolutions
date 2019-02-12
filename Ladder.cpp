#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>

#define PI 3.14159265

using namespace std;

int main() {
    double wall, angle;
    cin >> wall >> angle;
    cout << (int)ceil(wall/ sin(angle * PI / 180)) << endl;
    return 0;
}