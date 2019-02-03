#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int j = 0; j < cases; j++) {
        int numropes;
        vector<int> rsegments, bsegments;
        cin >> numropes;
        for (int i = 0; i < numropes; i++) {
            int num;
            char colour;
            cin >> num >> colour;
            if (colour == 'R') {
                rsegments.push_back(num);
            } else {
                bsegments.push_back(num);
            }
        }
        sort(rsegments.begin(), rsegments.end(), [](int a, int b) {
            return a > b;
        });
        sort(bsegments.begin(), bsegments.end(), [](int a, int b) {
            return a > b;
        });

        int size = min(rsegments.size(), bsegments.size());
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += rsegments[i];
            sum += bsegments[i];
            sum -= 2;
        }
        cout << "Case #" << j + 1 << ": " << sum << endl;
    }
    return 0;
}