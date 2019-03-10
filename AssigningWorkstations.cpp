#include <iostream>
#include <iomanip>
#include <cmath>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>
#include <list>
#include <stack>
#include <queue>

using namespace std;

typedef vector<int> vi;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int researchers, inactivmin;
    cin >> researchers >> inactivmin;
    vector<pair<int, int> > alljobs;
    priority_queue<int, vector<int>, greater<>> locktimes;
    int counter = 0;
    for(int i = 0; i < researchers; i++) {
        int arrival, duration;
        cin >> arrival >> duration;
        pair<int, int> job = make_pair(arrival, 1);
        alljobs.push_back(job);
        pair<int, int> endjob = make_pair(arrival + duration, 0);
        alljobs.push_back(endjob);
    }
    sort(alljobs.begin(), alljobs.end()); //Sorting alljobs by arrival time

//    for (auto i: alljobs) {
//        cout << i.first << " " << i.second << endl;
//    }
//    cout << "DEBUGGING END" << endl;

    for (auto i: alljobs) {
        if (i.second == 1) { // New researcher wants workstation
            while (!locktimes.empty() && locktimes.top() < i.first) { //Next researcher comes after locktime ends
                locktimes.pop();
            }
            if (locktimes.empty()) {
                counter++; // Need to unlock a new workstation
            } else {
                locktimes.pop();
            }
        } else { // Researcher ends. Is checked when flag is 0
            locktimes.push(i.first + inactivmin); // Pushes locking time into priority queue
        }
    }
    cout << researchers - counter << endl;
    return 0;
}