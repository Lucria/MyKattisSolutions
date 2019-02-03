#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int hour, minute;
    cin >> hour >> minute;
    minute -= 45;
    if (minute < 0) {
        minute += 60;
        hour -= 1;
    }
    if (hour < 0) {
        hour += 24;
    }
    cout << hour << " " << minute << endl;
    return 0;
}  