#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

int main() {
    string message;
    cin >> message;
    int halflength = message.size() / 2;
    vector <int> half1, half2;
    int sum1 = 0;
    int sum2 = 0;
    int input1, input2;
    for(int i = 0; i < halflength; i++) {
        input1 = message[i] - 'A';
        sum1 += input1;
        half1.push_back(input1);
    }
    for(int i = halflength; i < message.size(); i++) {
        input2 = message[i] - 'A';
        sum2 += input2;
        half2.push_back(input2);
    }
    
    for (int i = 0; i < halflength; i++) {
        cout << char(((half1[i] + half2[i] + sum1 + sum2) % 26) + 'A');
    }
    cout << endl;
    return 0;
}