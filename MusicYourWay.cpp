// Created by Jerry Zhang on 17/3/2019.

#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <string>
#include <cstring>
#include <string.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>
#include <sstream>
#include <list>
#include <stack>
#include <set>
#include <queue>
#include <map>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string attributes;
    getline(cin, attributes);
    int numsongs;
    cin >> numsongs;
    cin.ignore(); //Ignore newline character
    for (int i = 0; i < numsongs; i++) {
        string song;
        getline(cin, song);
        // TODO
    }
    int numcommands;
    cin >> numcommands;
    cin.ignore(); //Ignore newline character
    for (int j = 0; j < numcommands; j++) {
        string sortcommand;
        getline(cin, sortcommand);
        // TODO
    }
    return 0;
}
