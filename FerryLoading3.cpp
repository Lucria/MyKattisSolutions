// Done by Jerry Zhang Zhuoran
// A0197394M

#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <tuple>
#include <utility>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int maxcapacity, ferrytime, m;
        cin >> maxcapacity >> ferrytime >> m;
        vector <int> timings (m);
        queue <pair <int, int> > leftbank;
        queue <pair <int, int> > rightbank;
        for (int i = 0; i < m; i++) {
            int arrivaltime;
            string bank;
            cin >> arrivaltime >> bank;
            if (bank == "left") {
                leftbank.push(pair <int, int>(i, arrivaltime));
            } else {
                rightbank.push(pair <int, int>(i, arrivaltime));
            }
        }
        int currenttime = 0;
        int positionflag = 1; //1 is left, 0 is right
        while (!leftbank.empty() || !rightbank.empty()) {
            int firstleft = INT32_MAX;
            int firstright = INT32_MAX;
            if (!leftbank.empty()) {
                firstleft = leftbank.front().second;
            }
            if (!rightbank.empty()) {
                firstright = rightbank.front().second;
            }
            currenttime = max(currenttime, min(firstleft, firstright));
            int currentcapacity = maxcapacity;
            while ((!leftbank.empty() || !rightbank.empty()) && currentcapacity > 0){
                if (positionflag == 1 && !leftbank.empty() && leftbank.front().second <= currenttime) {
                    timings[leftbank.front().first] = currenttime + ferrytime;
                    currentcapacity--;
                    leftbank.pop();
                } else if (positionflag == 0 && !rightbank.empty() && rightbank.front().second <= currenttime) {
                    timings[rightbank.front().first] = currenttime + ferrytime;
                    currentcapacity--;
                    rightbank.pop();
                } else {
                    break;
                }
            }
            currenttime += ferrytime;
            positionflag = 1 - positionflag;
        }
        for (auto i: timings) {
            cout << i << endl;
        }
        cout << endl;
    }
    return 0;
}