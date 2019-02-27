#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>
#include <list>
#include <stack>
#include <set>
#include <sstream>

using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define M_PI 3.14159265358979323846

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    vector<string> line;
    string input;
    string split;
    getline(cin, input);
    istringstream iss(input);
    while (getline(iss, split, ' ')) {
        //cout << split << endl;
        line.push_back(split);
    }
    // for (auto i: line) {
    //     cout << i << endl;
    // }
    for (vector<string>::iterator it = line.begin(); it != line.end(); it++) {
        for (vector<string>::iterator it2 = it + 1; it2 != line.end(); it2++) {
            //cout << *it2 << endl;
            if (*it2 == *it) {
                cout << "no" << endl;
                return 0;
            }
        }
    }
    cout << "yes" << endl;

    return 0;
}