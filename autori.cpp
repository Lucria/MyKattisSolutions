#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string initials, input;
    cin >> input;
    istringstream iss(input);
    while(getline(iss, initials, '-')) {
        cout << initials[0];
    }
    return 0;
} 