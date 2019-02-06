#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
    int cards;
    stack<int> values;
    cin >> cards;
    for (int i = 0; i < cards; i++) {
        int input;
        cin >> input;
        if (!values.empty() && ((input + values.top()) % 2 == 0)) {
            values.pop();
        } else {
            values.push(input);
        }
    }
    cout << values.size() << endl;
    return 0;
}
