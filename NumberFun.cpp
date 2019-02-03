#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while(cases--) {
        int num1, num2, num3;
        cin >> num1 >> num2 >> num3;
        int add, subt, mult;
        float div;
        add = num1 + num2;
        subt = abs(num1 - num2);
        mult = num1 * num2;
        if ((num1 / num2) == 0) {
            div = (float)num2 / num1;
        } else {
            div = (float)num1 / num2;
        }
        if ((add == num3) || (subt == num3) || (mult == num3) || (div == num3)) {
            cout << "Possible" << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}