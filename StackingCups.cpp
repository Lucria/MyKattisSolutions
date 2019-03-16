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
    int cups;
    vector<string> allcups;
    allcups.resize(2000000, "");
    cin >> cups;
    cin.ignore();
    while (cups--) {
        string input;
        getline(cin, input);
        int diameter;
        string color;
        if (isdigit(input[0])) {
            istringstream iss(input);
            string test;
            iss >> test >> color;
            diameter = stoi(test);
        } else {
            istringstream iss(input);
            string test;
            iss >> color >> test;
            diameter = stoi(test) * 2;
        }
        allcups[diameter] = color;
    }
    for (int i = 0; i < allcups.size(); i++) {
        if (allcups[i] != "") {
            cout << allcups[i] << endl;
        }
    }
    return 0;
}
