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

double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2 , 2) + pow(y1 - y2 , 2));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int points; cin >> points; cin.ignore();
    set<pair<int,int>> allpoints;
    vector<int> allx = {0, 1118, 1680, 2018};
    vector<int> ally = {2018, 1680, 1118, 0};
    int counter = 0;
    for(int i = 0; i < points; i++) {
        int x, y;
        cin >> x >> y;
        allpoints.insert(make_pair(x,y));
        set <pair<int,int>> found;
    // cout << totalpermu << endl;
        for (int a = 1; a >= -1; a -= 2) {
            for (int b = 1; b >= -1; b -= 2) {
                for (int c = 0; c < 4; c++) {
                    int tryx = x + a * allx[c];
                    int tryy = y + b * ally[c];
                    if (allpoints.find(make_pair(tryx, tryy)) != allpoints.end()) {
                        found.insert(make_pair(tryx,tryy));
                    }
                }
            }
        }
        counter += found.size();
        // cout << found.size() << endl;
    }
    /**
     * Too Slow!
     */
    // for (int i = 0; i < points; i++) {
    //     for (int j = i + 1; j < points; j++) {
    //         if (distance(allpoints[i].first, allpoints[i].second, allpoints[j].first, allpoints[j].second) == 2018) {
    //             counter++;
    //         } 
    //     }
    // }
    cout << counter << endl;
    return 0;
}