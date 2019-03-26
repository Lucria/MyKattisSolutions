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
    int N, M;
    cin >> N >> M; cin.ignore();
    // cout << N << M << "TEST" << endl;
    vector<string> canvas;
    
    for (int i = 0; i < N; i++) {
        string input; getline(cin, input);
        canvas.push_back(input);
    }
    // cout << endl << endl;
    // for ( auto i : canvas) {
    //     for (auto j : i) {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    int counter = 0;
    for (int i = 0; i < M; i++) {
        bool emptycolumn = true;
        for (int j = 0; j < N; j++) {
            if (canvas[j][i] == '$') {
                emptycolumn = false;
            }
        }
        if (emptycolumn) {
            counter++;
        }
    }
    cout << counter + 1 << endl;
    return 0;
}