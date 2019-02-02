#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        vector<string> list;
        for (int i = 0; i < n; ++i) {
            string m;
            cin >> m;
            list.push_back(m);
        }
        stable_sort(list.begin(), list.end(), [](string a, string b) {
            return a.substr(0, 2).compare(b.substr(0, 2)) < 0;
        });
        for (const string c : list) {
            cout << c << endl;
        }
        cout << endl;
    }
}
