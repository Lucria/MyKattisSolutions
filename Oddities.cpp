#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while(cases--) {
        int number;
        cin >> number;
        if (number % 2 == 0) {
            cout << number << " is even" << endl;
        } else {
            cout << number << " is odd" << endl;
        }
    }
    return 0;
}
