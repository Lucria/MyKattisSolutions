#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

int main() {
    int cases;
    int cold = 0;
    cin >> cases;
    while(cases--){
        int temp;
        cin >> temp;
        if (temp < 0) {
            cold++;
        }
    }
    cout << cold << endl;
    return 0;
}