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
    int data; cin >> data;
    for (int i = 0; i < data; i++) {
        int setnum; int N;
        cin >> setnum >> N;
        int total = (N + 1) * N / 2;
        total += N;
        cout << setnum << " " << total << endl;
    }
    return 0;
}