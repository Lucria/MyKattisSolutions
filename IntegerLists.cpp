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
    for(int i = 0; i < cases; i++) {
        bool breakflag = false;
        bool reverseflag = false;
        string commands;
        cin >> commands;
        int listlen;
        list<int> numbers;
        cin >> listlen;
        char junkchar;
        cin >> junkchar;
        for (int i = 0; i < listlen; i++) {
            int input;
            cin >> input >> junkchar;
            numbers.push_back(input);
        }
        if (listlen == 0) {
            cin >> junkchar;
        }
        int commandslen = commands.length();
        for(int i = 0; i < commandslen; i++) {
            if (commands[i] == 'R') {
                if (reverseflag == false) {
                    reverseflag = true;
                } else {
                    reverseflag = false;
                }
            } else if (commands[i] == 'D') {
                if (!numbers.empty() && reverseflag == false) {
                    numbers.pop_front();
                } else if (!numbers.empty() && reverseflag == true) {
                    numbers.pop_back();
                } else {
                    cout << "error" << endl;
                    breakflag = true;
                    break;
                }
            }
        }
        if (!numbers.empty() && reverseflag == false) {
            cout << '[';
            while(!numbers.empty() && numbers.size() != 1) {
                cout << numbers.front() << ',';
                numbers.pop_front();
            }
            cout << numbers.front();
            cout << ']' << endl;
        } else if (!numbers.empty() && reverseflag == true) {
            cout << '[';
            while(!numbers.empty() && numbers.size() != 1) {
                cout << numbers.back() << ',';
                numbers.pop_back();
            }
            cout << numbers.front();
            cout << ']' << endl;
        } else if (breakflag == false) {
            cout << "[]" << endl;
        }
    }
    return 0;
}
