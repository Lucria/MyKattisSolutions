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

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string input;
    cin >> input;
    int tcount = 0;
    int ccount = 0;
    int gcount = 0;
    for (auto i: input) {
        if (i == 'T') {
            tcount++;
        } else if (i == 'C') {
            ccount++;
        } else if (i == 'G') {
            gcount++;
        }
    }
    int temp = min(tcount, ccount);
    int set = min(temp, gcount);
    cout << pow(tcount, 2) + pow(ccount, 2) + pow(gcount, 2) + set * 7 << endl;
    return 0;
}