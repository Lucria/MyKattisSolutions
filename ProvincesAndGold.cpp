#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

int main() {
    int gold, silver, copper;
    cin >> gold >> silver >> copper;
    string output;
    int buyingpower = gold * 3 + silver * 2 + copper * 1;
    if (buyingpower >= 8) {
        output.append("Province");
    } else if (buyingpower >= 5) {
        output.append("Duchy");
    } else if(buyingpower >= 2) {
        output.append("Estate");
    }
    if (buyingpower >= 6) {
        output.append(" or Gold");
    } else if (buyingpower >= 3) {
        output.append(" or Silver");
    } else if (buyingpower >= 0) {
        output.append(" or Copper");
    }
    if (output == " or Copper") {
        cout << "Copper" << endl;
        return 0;
    }
    cout << output << endl;
    return 0;
}