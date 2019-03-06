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

using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define M_PI 3.14159265358979323846

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    vector <int> storage;
    for(int i = 0; i < 10; i++) {
        int input;
        cin >> input;
        storage.push_back(input % 42);
    }
    sort(storage.begin(), storage.end());
    int counter = 1;
    int start = storage.front();
    for (auto i = storage.begin() + 1; i != storage.end(); i++) {
        if (*i != start) {
            counter++;
            start = *i;
        }
    }
    cout << counter << endl;
    return 0;
}