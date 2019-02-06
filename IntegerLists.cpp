#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <string.h>
#include <algorithm>
#include <list>
#include <deque>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        string commands;
        getline(cin, commands);
        int listlen;
        list<int> numbers;
        cin >> listlen;
        for (int i = 0; i < listlen; i++) {
            int input;
            cin >> input;
            numbers.push_back(input);
        }
    }
    return 0;
}
