#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        string input1;
        string input2;
        cin >> input1 >> input2;
        int length = input1.size();
        cout << input1 << endl;
        cout << input2 << endl;
        for (int i = 0; i < length; i++) {
            char one = input1[i];
            char two = input2[i];
            if (one != two) {
                cout << "*";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}