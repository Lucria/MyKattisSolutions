#include <iostream>
using namespace std;

int main() {
    int values;
    while (cin >> values) {
        if (values == -1) {
            return 0;
        }
        int sum = 0;
        int miles = 0;
        for (int i = 0; i < values; i++) {
            int speed, time;
            cin >> speed >> time;
            miles += speed*abs((sum-time));
            sum = time;
        }
        cout << miles << " miles" << endl;
    }
    return 0;
}