#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    int cases;
    vector<string> names;
    vector<string> originalnames;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        string name;
        cin >> name;
        names.push_back(name);
        originalnames.push_back(name);
    }
    bool reverseflag = true;
    bool forwardflag = true;

    sort(names.begin(), names.end());
    for (int i = 0; i < cases; i++) {
        if (names[i] != originalnames[i]) {
            forwardflag = false;
        }
    }
    if (forwardflag) {
        cout << "INCREASING" << endl;
        return 0;
    }

    reverse(names.begin(), names.end());
    for (int i = 0; i < cases; i++) {
        if (names[i] != originalnames[i]) {
            reverseflag = false;
        }
    }
    if (reverseflag) {
        cout << "DECREASING" << endl;
        return 0;
    }

    cout << "NEITHER" << endl;
    return 0;
}