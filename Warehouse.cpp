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
    int cases; cin >> cases; cin.ignore();
    while (cases--) {
        int numshipments; cin >> numshipments; cin.ignore();
        map <string, int> alltoys;
        for(int i = 0; i < numshipments; i++) {
            string toy;
            int numtoy;
            cin >> toy >> numtoy;
            // cout << "Checking: " << toy << " " << numtoy << endl;
            
            alltoys[toy] += numtoy;
        }
        vector< pair <string, int> > output;
        for (auto i : alltoys) {
            output.push_back(make_pair(i.first, i.second));
        }
        sort(output.begin(), output.end(), [] (pair<string,int> a, pair<string, int> b){
            if (a.second != b.second) {
                return a.second > b.second;
            } else {
                return a.first < b.first;
            }
        });
        cout << output.size() << endl;
        for (auto i : output) {
            cout << i.first << " " << i.second << endl;
        }
    }
    return 0;
}