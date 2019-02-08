#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

int main() {
    string message;
    getline(cin, message);
    int halflength = message.size() / 2;
    vector <int> half1, half2;
    int sum1, sum2;
    for (int i = 0; i < halflength; i++) {
        int input1, input2;
        input1 = message[i] - 'A';
        input2 = message[i + halflength] - 'A';
        sum1 += input1;
        sum2 += input2;
        half1.push_back(input1);
        half2.push_back(input2);
    }
    for (int i = 0; i < halflength; i++) {
        cout << char(((half1[i] + half2[i] + sum1 + sum2 - 1) % 26) + 'A');
    }
    cout << endl;
    return 0;
}