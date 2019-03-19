
#include <iostream>
#include <iomanip>
#include <string>
#include <istream>
#include <unordered_map>
#include <vector>
#include <sstream>
#include <algorithm>
#include <algorithm>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    cin.ignore();
    while (cases--) {
        int numpeople;
        cin >> numpeople;
        cin.ignore();
        vector<pair<string, string> > everybody;
        for (int i = 0; i < numpeople; i++) {
            string name;
            cin >> name;
            name.pop_back();
            string input;
            cin >> input;
            string empty;
            cin >> empty;
            istringstream iss(input);
            string token;
            string allattributes;
            int counter = 0;
            while (getline(iss, token, '-')) {
                counter++;
                if (token == "upper") {
                    token = "a";
                } else if (token == "middle") {
                    token = "b";
                } else if (token == "lower") {
                    token = "c";
                }
                allattributes.append(token);
            }
            while (counter < 10) {
                allattributes = "b" + allattributes;
                counter++;
            }
            reverse(allattributes.begin(), allattributes.end());
//            cout << allattributes << endl;
            everybody.push_back(make_pair(name, allattributes));
            sort(everybody.begin(), everybody.end(), [](pair<string, string> a, pair<string, string> b) {
                if (a.second == b.second) {
                    return a.first < b.first;
                }
                return a.second < b.second;
            });
        }
        for (auto i : everybody) {
            cout << i.first << endl;
        }
        cout << "==============================" << endl;
    }
    return 0;
}
