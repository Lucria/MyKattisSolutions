#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string input;
    getline(cin, input);
    int whitespace = 0;
    int lower = 0;
    int upper = 0;
    int special = 0;
    int total = input.length();
    for (int i = 0; i < total; i++) {
        if (input[i] == '_') {
            whitespace++;
        } else if (islower(input[i])) {
            lower++;
        } else if (isupper(input[i])) {
            upper++;
        } else {
            special++;
        }
    }
    cout << setprecision(15) << (double) whitespace / total << endl;
    cout << setprecision(15) << (double) lower / total << endl;
    cout << setprecision(15) << (double) upper / total << endl;
    cout << setprecision(15) << (double) special / total << endl;
    return 0;
}