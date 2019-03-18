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
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string inattributes;
    getline(cin, inattributes);
    vector <string> attributes;
    istringstream iss (inattributes);
    string token;
    while (getline(iss, token, ' ')) {
        attributes.push_back(token);
    }
    // cout << " ATTRIBUTES! " << endl;
    // for (auto i : attributes) {
    //     cout << i << endl;
    // }

    int numsongs;
    cin >> numsongs;
    cin.ignore(); //Ignore newline character
    vector < vector <string> > allsongs;
    for (int i = 0; i < numsongs; i++) {
        string inputsong;
        getline(cin, inputsong);
        istringstream iss2(inputsong);
        vector<string> song;
        while (getline(iss2, token, ' ')) {
            song.push_back(token);
        }
        allsongs.push_back(song);
    }
    int numcommands;
    cin >> numcommands;
    cin.ignore(); //Ignore newline character
    for (int j = 0; j < numcommands; j++) {
        string sortcommand;
        getline(cin, sortcommand);
        for (auto i : attributes) {
            cout << i << " ";
        }
        cout << endl;
        int counter = 0;
        for (int k = 0; k < attributes.size(); k++) {
            if (attributes[k] == sortcommand) {
                counter = k;
            }
        }
        stable_sort(allsongs.begin(), allsongs.end(), [counter] (vector<string> a, vector<string> b) {
            return a[counter] < b[counter];
        });
        for (auto i: allsongs) {
            for (auto j: i) {
                cout << j << " ";
            }
            cout << endl;
        }
        
    }
    return 0;
}
