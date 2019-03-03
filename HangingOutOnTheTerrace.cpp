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

using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define M_PI 3.14159265358979323846

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int limit, events;
    cin >> limit >> events;
    int current = 0;
    int warnings = 0;
    for (int i = 0; i < events; i++ ){ 
        string command;
        int numpeople;
        cin >> command >> numpeople;
        if (command == "enter") {
            current += numpeople;
            if (current > limit) {
                current -= numpeople;
                warnings++;
            }
        } else {
            current -= numpeople;
        }
    }
    cout << warnings << endl;
    return 0;
}