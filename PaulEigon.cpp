#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <string>
#include <cstring>
#include <string.h>
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

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int serves, currentscore, opponentscore;
    cin >> serves >> currentscore >> opponentscore;
    int total = currentscore + opponentscore;
    if ((total / serves) % 2 == 0) {
        cout << "paul" << endl;
    } else {
        cout << "opponent" << endl;
    }
    return 0;
}
