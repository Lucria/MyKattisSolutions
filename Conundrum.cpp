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
    string newstring;
    for(int i = 0; i < length / 3; i++) {
        newstring.append("PER");
    }
    int counter = 0;
    for (int i = 0; i < length; i++) {
        if (input[i] != newstring[i]) {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}