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

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector <string> allschools;
    int teams;
    cin >> teams;
    bool flag = false;
    for (int i = 0; i < teams; i++) {
        string uniname;
        string teamname;
        cin >> uniname >> teamname;
        for (auto i: allschools) {
            if (uniname == i) {
                flag = true;
            }
        }
        if (flag == false && allschools.size() < 12) {
            allschools.push_back(uniname);
            cout << uniname << " " << teamname << endl;
        }
        flag = false;
    }
    return 0;
} 
