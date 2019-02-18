#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;
    int length = input.length();
    int current = 1;
    for(int i = 0; i < length; i++) {
        if (input[i] == 'A') {
            if (current == 1 || current == 2) {
                current = 3 - current;
            }
        } else if (input[i] == 'B') {
            if (current == 2 || current == 3) {
                current = 5 - current;
            }
        } else {
            if (current == 1 || current == 3) {
                current = 4 - current;
            }
        }
    }
    cout << current << endl;
    return 0;
}