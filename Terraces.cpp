// Created by Lucria
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
typedef pair<int, int> pii;
#define M_PI 3.14159265358979323846

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    vector<vector<int>> canvas;
    int x, y;
    cin >> x >> y;
    canvas.resize(y, vector<int>(x, 0));
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            int input;
            cin >> input;
            canvas[i][j] = input;
        }
    }
    for (auto i : canvas) {
        for (auto j : i) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}