#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>
#include <stack>

using namespace std;

int main() {
    int students, commands;
    stack <int> s;
    cin >> students >> commands;
    int sum = 0;
    for (int i = 0; i < commands; i++) {
        string input;
        cin >> input;
        if (input == "undo") {
            int number;
            cin >> number;
            for (int j = 0; j < number; j++) {
                s.pop();
            }
        } else {
            s.push(stoi(input));
        }
    }
    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }
    sum %= students;
    if (sum < 0) {
        sum += students;
    }
    cout << sum << endl;
    return 0;
}