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

int sum_int (int input) {
    int sum = 0;
    while (input != 0) {
        sum += input % 10;
        input /= 10;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int input;
    while (cin >> input, input != 0) {
        int sum = sum_int(input);
        // cout << sum << endl;
        // cout << input << endl;
        int answer = 11;
        while (sum != sum_int(input * answer)) {
            answer++;
        }
        cout << answer << endl;
    }
    return 0;
}