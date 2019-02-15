#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>
#include <stack>
#include <queue>
#include <list>

using namespace std;

int main() {
    stack <char> line;
    string input;
    list <char> printing;
    getline(cin, input);
    int length = input.length();
    for(int i = 0; i < length; i++) {
        char character = input[i];
        line.push(character);
        if (character == '<') {
            line.pop();
            line.pop();
        }
    }
    while (!line.empty()) {
        char output = line.top();
        printing.push_front(output);
        line.pop();
    }
    for (auto i: printing) {
        cout << i;
    }
    return 0;
}