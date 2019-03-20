// Created by Jerry
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string.h>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define M_PI 3.14159265358979323846

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    double ratio;
    int N;
    cin >> ratio >> N;
    priority_queue <pair<double, double>> allweights;
    vector <double> originalweights;
    vector <double> cuts;
    double smallestcut = INT32_MAX;
    for (double i = 0; i < N; i++) {
        double weight;
        cin >> weight;
        allweights.push(make_pair(weight, i));
        originalweights.push_back(weight);
        cuts.push_back(1);
        smallestcut = min(smallestcut, weight);
    }
    // cout << "Smallest Cut: " << smallestcut << endl;
    int sum = 0;
    // cout << ratio << endl;
    while (smallestcut / (originalweights[allweights.top().second] / cuts[allweights.top().second]) < ratio) {
        // cout << "Calculated ratio " << smallestcut / (originalweights[allweights.top().second] / cuts[allweights.top().second]) << endl;
        cuts[allweights.top().second]++;
        double newweight = originalweights[allweights.top().second] / cuts[allweights.top().second];
        smallestcut = min(smallestcut, newweight);
        // cout << "New Smallest Cut: " << smallestcut << endl;
        double index = allweights.top().second;
        allweights.pop();
        // cout << "After cut :" << newweight << endl;
        allweights.push(make_pair(newweight, index));
    }
    // cout << "Last smallestcut " << smallestcut << endl;
    // cout << "Last ratio " << smallestcut / (originalweights[allweights.top().second] / cuts[allweights.top().second]) << endl;
    // cout << "Largest piece and its cuts " << allweights.top().first << " " << cuts[allweights.top().second] << endl;
    for (auto i : cuts) {
        sum += i;
    }
    // cout << "Counter " << sum - N << endl;
    cout << sum - N << endl;
    return 0;
}