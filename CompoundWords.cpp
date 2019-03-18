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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string input;
    multiset <string> allfragments;
    while (getline(cin, input)) {
        istringstream iss(input);
        string word;
        while (getline(iss, word, ' ')) {
            allfragments.insert(word);
        }
    }
    set <string> allcompound;
    int size = allfragments.size();
    for (auto itr = allfragments.begin(); itr != allfragments.end(); itr++) {
        string compound;
        for (auto itr2 = allfragments.begin(); itr2 != allfragments.end(); itr2++) {
            if (itr2 != itr) {
                compound = *itr + *itr2;
                allcompound.insert(compound);
            }
        }
    }
    for (auto i : allcompound) {
        cout << i << endl;
    }
    return 0;
}

