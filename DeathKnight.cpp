#include <iostream>
#include <iomanip>
#include <cmath>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>
#include <list>
#include <stack>
#include <queue>

using namespace std;

typedef vector<int> vi;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int battles;
    cin >> battles;
    cin.ignore();
    int counter = 0;
    for (int i = 0; i < battles; i++) {
        string abilities;
        getline(cin, abilities);
        if (abilities.find("CD") != string::npos) {
            counter++;
        }
    }
    cout << battles - counter << endl;
    return 0;
}
