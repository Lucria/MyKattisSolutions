#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

int main() {
    int startday = 1;
    int startmonth = 1;
    int inputday, inputmonth;
    cin >> inputday >> inputmonth;
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int difference = inputday - startday;
    for (int i = startmonth; i < inputmonth; i++) {
        difference += month[i-1];
    }
    difference %= 7;
    string days[7] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
    cout << days[difference] << endl;
    return 0;
}