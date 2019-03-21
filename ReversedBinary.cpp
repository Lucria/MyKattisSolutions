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
#include <bitset>

using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define M_PI 3.14159265358979323846

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int input;
    cin >> input;
    string binary = bitset<32>(input).to_string();
    // cout << binary << endl;
    // string output;
    reverse(binary.begin(), binary.end());
    while (*binary.rbegin() == '0') {
        // cout << " DEBUG " << binary << endl;
        binary.pop_back();
    }
    // cout << output << endl;
    // cout << binary << endl;
    unsigned long decimal = bitset<32>(binary).to_ulong();
    cout << decimal << endl;
    return 0;
}