#include <iostream>
using namespace std;

int main() {
    int obstacles, found;
    cin >> obstacles >> found;
    int count = obstacles;
    int arr[found];
    for (int i = 0; i < found; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < obstacles; i++) {
        bool finded = false;
        for (int j = 0; j < found; j++) {
            if (i == arr[j]) {
                finded = true;
            }
        }
        if (!finded) {
            count -= 1;
            cout << i << endl;
        }
    }
    cout << "Mario got " << count << " of the dangerous obstacles.";
    return 0;
}