#include <iostream>
#include <string>
#include <sstream>
#include <istream>
#include <algorithm>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int cases;
    while (cin >> cases && cases != 0) {
        cin.ignore();
        vector<int> am;
        vector<int> pm;
        for (int i = 0; i < cases; i++) {
            int hours, minutes;
            char junk;
            string flag;
            cin >> hours >> junk >> minutes;
            cin >> flag;
            if (hours == 12) {
                hours = 0;
            }
            //cout << "DEBUG PLEASE" << hours << " " << minutes << endl;
            if (flag == "a.m.") {
                am.push_back(hours * 100 + minutes);
            } else {
                pm.push_back(hours * 100 + minutes);
            }
            //cout << time << " Debug " << flag << endl;
        }
        sort(am.begin(), am.end(), [](int a, int b) {
            return a < b;
        });
        sort(pm.begin(), pm.end(), [](int a, int b) {
            return a < b;
        });
        for (auto i : am) {
            int hours = i / 100;
            if (hours == 0) {
                hours = 12;
            }
            int minutes = i % 100;

            cout << hours << ":";
            if (minutes < 10) {
                cout << "0";
            }
            cout << minutes << " a.m." << endl;
        }
        for (auto i : pm) {
            int hours = i / 100;
            if (hours == 0) {
                hours = 12;
            }
            int minutes = i % 100;

            cout << hours << ":";
            if (minutes < 10) {
                cout << "0";
            }
            cout << minutes << " p.m." << endl;
        }
        cout << endl;
    }
}