#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int matches, width, height;
    cin >> matches >> width >> height;
    double hypotenuse = sqrt(pow(width, 2) + pow(height,2));
    while(matches--) {
        int x;
        cin >> x;
        if ((x <= width) || (x <= height) || (x <= hypotenuse)) {
            cout << "DA" << endl;
        } else {
            cout << "NE" << endl;
        }
    }
    return 0;
}