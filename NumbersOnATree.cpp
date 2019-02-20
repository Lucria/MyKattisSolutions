#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>
#include <queue>

using namespace std;

int main() {
    int height;
    string commands;
    cin >> height >> commands;
    int index = 1;
    int length = commands.length();
    for(int i = 0; i < length; i++) {
        if (commands[i] == 'L') {
            index *= 2;
        } else if (commands[i] == 'R') {
            index = index * 2 + 1;
        }
    }
    // cout << pow(2, height + 1) << endl;
    // cout << index << endl;
    cout << (int)pow(2, height + 1) - index << endl;
    //cout << (1<<(height+1)) - ans << endl;
    return 0;
}