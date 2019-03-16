
// Created by Jerry on 16/3/2019.

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
    int guests;
    cin >> guests;
    unordered_map<int, vector<int>> allguests;
    for (int i = 0; i < guests; i++) {
        int language;
        cin >> language;
        allguests[language].push_back(i);
    }
    int awkward = allguests.size();
    for (auto i : allguests) {
        for (int j = 0; j < i.second.size() - 1; j++) {
            awkward = min(awkward, (i.second[j + 1] - i.second[j]));
        }
    }
    cout << awkward << endl;
    return 0;
}
