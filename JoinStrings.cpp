#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int numstrings;
    cin >> numstrings;
    cin.ignore();
    vector<list<string>> allstrings;
    allstrings.resize(numstrings);
    for (auto &i : allstrings) {
        string input;
        cin >> input;
        i.push_back(input);
//      cout << i.size() << endl;
//      cout << " complete" << endl;
    }
    for (int i = 0; i < numstrings - 1; i++) {
        int a, b;
        cin >> a >> b;
//      allstrings[a-1] = allstrings[a-1] + allstrings[b-1];
//      allstrings[b-1] = "";
        allstrings[a - 1].splice(allstrings[a - 1].end(), allstrings[b - 1]);
//      cout << "Test" << endl;
//      for (auto j : allstrings[b-1]) {
//          cout << j << endl;
//      }
//      cout << "end" << endl;
    }
//  string output;
    for (auto &i : allstrings) {
//      cout << "run " << endl;
//      if (i != "") {
//          cout << i << endl;
//      }
//      cout << i << endl;
        for (auto &j : i) {
            cout << j;
        }
    }
//  cout << output;
    return 0;
}