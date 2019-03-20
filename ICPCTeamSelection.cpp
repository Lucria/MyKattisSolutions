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
    int datasets; cin >> datasets; cin.ignore();
    for(int i = 0; i < datasets; i++) {
        vector<int> allscores;
        int numteams; cin >> numteams; cin.ignore();
        for (int j = 0; j < 3 * numteams; j++) {
            int score; cin >> score; 
            allscores.push_back(score);
        }
        sort(allscores.rbegin(), allscores.rend());
        int sum = 0;
        for (int j = 0; j < numteams; j++) {
            //Weakest members are all the way at the front after sorting
            //Group strongest and second strongest together at the front
            //Take the second strongest in order to maximise the score
            sum += allscores[j*2 + 1];
        }
        cout << sum << endl;
        cout << "DEBUGGING " << endl;
        for (auto i : allscores) {
            cout << i << endl;
        }
    }
    return 0;
}