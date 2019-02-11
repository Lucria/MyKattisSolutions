#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

int main() {
    string month;
    int date;
    cin >> month >> date;
    if ((month == "OCT" && date == 31) || (month == "DEC" && date == 25)) {
        cout << "yup" << endl;
    } else {
        cout << "nope" << endl;
    }
    return 0;
}