#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int minimum = min(n,m);
    int difference = max(n,m) - minimum;
    for(int i = 0; i <= difference; i++) {
        cout << minimum + i + 1<< endl;
    }
    return 0;
}