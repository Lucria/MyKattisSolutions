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
#include <set>
#include <queue>
#include <map>
#include <unordered_map>
#include <sstream>

using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define M_PI 3.14159265358979323846
// TODO INCOMPLETE
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string input;
    getline(cin, input);
    for (auto i = input.begin(); i != input.end(); i++) {
        cout << *i;
        if (*i == 'a' || *i == 'e' || *i == 'i' || *i == 'o' || *i == 'u') {
            i += 2;
        }
    }    
    return 0;
}