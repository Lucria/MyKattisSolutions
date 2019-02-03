#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int count = 1;
    int numbers;
    while(cin >> numbers) {
        int mini = 10e6;
        int maxi = -10e6;
        for (int i = 0; i < numbers; i++) {
            int input;
            cin >> input;
            mini = min(mini, input);
            maxi = max(maxi, input);
        }
        cout << "Case " << count++ << ": " << mini << " " << maxi << " " << maxi - mini << endl;
    }
    return 0;
}