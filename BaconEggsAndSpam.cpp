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
    int customers;
    while (cin >> customers, customers != 0) {
        map <string, set<string>> foodorder;
        cin.ignore();
        for (int i = 0; i < customers; i++) {
            string input;
            getline(cin, input);
            istringstream iss (input);
            string name;
            iss >> name;
            string items;
            while (iss >> items) {
                foodorder[items].insert(name);
                // cout << items << " ordered by " << name << endl;
            }
        }
        for (auto i: foodorder) {
            cout << i.first << " ";
            for (auto itr = i.second.begin(); itr != i.second.end(); itr++) {
                cout << *itr << " ";
            }
            cout << endl;
        }
    }
    return 0;
}