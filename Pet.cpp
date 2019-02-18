#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

int main() {
    int sum = 0;
    int winner = 0;
    for (int i = 0; i < 5; i++) {
        vector <int> grades;
        int grade1, grade2, grade3, grade4;
        cin >> grade1 >> grade2 >> grade3 >> grade4;
        if (grade1 + grade2 + grade3 + grade4 > sum) {
            winner = i;
        }
        sum = max(sum, grade1+grade2+grade3+grade4);
    }
    cout << winner + 1 << " " << sum << endl;
    return 0;
}