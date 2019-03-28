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
    int rot;
    while (cin >> rot, rot != 0) {
        string input; cin >> input;
        reverse(input.begin(), input.end());
        for (int j = 0; j < rot; j++) {
            for (auto &i : input) {
                i++;
                if (i == 'Z' + 1) {
                    i = '_';
                } else if (i == '_' + 1) {
                    i = '.';
                } else if (i == '.' + 1) {
                    i = 'A';
                }
            }
        }
        
        cout << input << endl;
    }
    return 0;
}