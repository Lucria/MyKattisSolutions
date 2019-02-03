#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int cases;
    int sum = 0;
    cin >> cases;
    while(cases--) {
        int input;
        cin >> input;
        int power = input%10;
        input /= 10;
        sum += pow(input, power);
    }
    cout << sum << endl;
    return 0;   
}