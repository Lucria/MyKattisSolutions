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
#include <queue>

using namespace std;

typedef vector<int> vi;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int researchers, inactivmin;
    cin >> researchers >> inactivmin;
    vector <pair <int, int> > jobs;
    priority_queue <int> timeline;
    int counter = 0;
    for(int i = 0; i < researchers; i++) {
        int arrival, duration;
        cin >> arrival >> duration;
        pair <int, int> person = make_pair(arrival, duration);
        jobs.push_back(person);
    }
    sort(jobs.begin(), jobs.end());
    cout << counter;
    return 0;
}