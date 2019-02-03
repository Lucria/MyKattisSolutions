#include <iostream>
using namespace std;

int main() {
    int l, d, x;
    cin >> l >> d >> x;
    for (int i = l; i <= d; i++) {
        int number = i;
        int digitsum1 = 0;
        while(number != 0) {
            int digit = number % 10;
            digitsum1 += digit;
            number /= 10;
        }
        if (digitsum1 == x) {
            cout << i << endl;
            break;
        }
    }
    for (int i = d; i >= l; i--) {
        int digitsum2 = 0;
        int number = i;
        while (number != 0) {
            int digit = number % 10;
            digitsum2 += digit;
            number /= 10;
        }
        if (digitsum2 == x) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}