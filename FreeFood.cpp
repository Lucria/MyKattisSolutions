#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    vector <int> calender(365, 1);
    int sum = 0;
    while (cases--) {
        int start, end;
        cin >> start >> end;
        for (int i = start - 1; i < end; i++) {
            calender[i] = 0;
        }
    }
    for (int i = 0; i < 365; i++) {
        if (calender[i] == 0) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}