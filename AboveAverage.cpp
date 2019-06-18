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
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int cases;
    cin >> cases;
    while (cases--) {
        int people;
        vector<int> allgrades;
        cin >> people;
        for (int i = 0; i < people; i++) {
            int grade;
            cin >> grade;
            allgrades.push_back(grade);
        }
        double sum = 0;
        for (auto i : allgrades) {
            sum += i;
        }
        double average = sum / allgrades.size();
        double counter = 0;
        for (auto i : allgrades) {
            if (i > average) {
                counter++;
            }
        }
        double percentage = counter / allgrades.size() * 100.0;
        cout << fixed << setprecision(3) << percentage << "%" << endl;
    }
    return 0;
}
