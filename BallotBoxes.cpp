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
#include <queue>

using namespace std;

typedef vector<int> vi;
typedef long long ll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    while(true) {
        int numcities, numboxes;
        cin >> numcities >> numboxes;
        if (numcities == -1 || numboxes == -1) {
            break;
        }
        priority_queue<pair <int, int>> allpopulation;
        vector <int> originalpopulation;
        vector <int> divisors;
        for(int i = 0; i < numcities; i++) {
            int population;
            cin >> population;
            pair <int, int> temp = make_pair(population, i);
            allpopulation.push(temp);
            originalpopulation.push_back(population);
            divisors.push_back(1);
        }
        int difference = numboxes - numcities;
        while (difference--) {
            double index = allpopulation.top().second;
            double popu = originalpopulation[index];
            divisors[index]++;
            allpopulation.pop();
            allpopulation.push(make_pair(ceil(popu / divisors[index]), index));
        }
        cout << allpopulation.top().first << endl;
    }
    return 0;
}