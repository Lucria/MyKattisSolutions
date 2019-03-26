// Created by Jerry
#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
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
#include <unordered_set>

using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define M_PI 3.14159265358979323846

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    // TODO TOO TEDIOUS
    int numrun;
    while (cin >> numrun, numrun != 0) {
        map<string, int> bibdata;
        for(int i = 0; i < numrun; i++) {
            string firstname, lastname;
            int bib;
            cin >> firstname >> lastname >> bib;
            string formatted = lastname + ", " + firstname;
            // cout << "Checking: " << formatted << endl;
            bibdata[formatted] = bib;
        }
        vector<pair<int, int>> split1;
        vector<pair<int, int>> split2;
        vector<pair<int, int>> finaltime;
        for (int i = 0; i < 3*numrun; i++) {
            int bib;
            string location;
            int minutes, seconds;
            char junk;
            cin >> bib >> location >> minutes >> junk >> seconds;
            int changedtime = minutes * 100 + seconds;
            if (location == "S1") {
                split1.push_back(make_pair(changedtime, bib));
            } else if (location == "S2") {
                split2.push_back(make_pair(changedtime, bib));
            } else {
                finaltime.push_back(make_pair(changedtime, bib));
            }
            sort(split1.begin(), split1.end());
            sort(split2.begin(), split2.end());
            sort(finaltime.begin(), finaltime.end());
            // cout << "Checking data: " << setfill('0') << setw(5) << bib; //Pad leading 0s and maximum length is 5
            // cout << " " << location << " " << minutes << " " << seconds << endl;
        }
        cout << "NAME                       BIB    SPLIT1      RANK    SPLIT2      RANK    FINISH      RANK" << endl;
        for (int i = 0; i < numrun; i++) {
            auto itr = bibdata.begin();
            advance(itr, i);
            if (itr != bibdata.end()) {
                cout << itr->first;
            }
            int length = itr->first.length();
            int namespaces = 20 - length;
            for (int j = 0; j < namespaces + 5; j++) {
                cout << " ";
            }
            cout << setfill('0') << setw(5) << itr->second;
            
            int counter = 1;
            for (auto j : split1) {
                if (j.second == itr->second) {
                    int minutes = (j.first) / 100;
                    int seconds = (j.first) % 100;
                    for (int a = 0; a < 5; a++) {
                        cout << " ";
                    }
                    cout << minutes << ":" << seconds;
                    break;
                    // cout << "TEST " << numberofdigits;
                }
                counter++;
            }

            int temp = numrun;
            int numberofdigits = 0;
            while (temp > 0) {
                numberofdigits++;
                temp /= 10;
            }

            for (int b = 0; b < 10 - numberofdigits; b++) {
                cout << " ";
            }
            cout << counter;

            int counter2 = 1;
            for (auto j : split2) {
                if (j.second == itr->second) {
                    int minutes = (j.first) / 100;
                    int seconds = (j.first) % 100;
                    for (int a = 0; a < 5; a++) {
                        cout << " ";
                    }
                    cout << minutes << ":" << setfill('0') << setw(2) << seconds;
                    break;
                    // cout << "TEST " << numberofdigits;
                }
                counter2++;
            }

            for (int b = 0; b < 10 - numberofdigits; b++) {
                cout << " ";
            }
            cout << counter2;

            cout << endl;
        }
    }
    return 0;
}