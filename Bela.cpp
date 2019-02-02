#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    int hands;
    char dominant;
    int sum = 0;
    cin >> hands >> dominant;
    for (int i = 4*hands; i > 0; i--) {
        string card;
        cin >> card;
        char description = card[0];
        char suit = card[1];
        switch (description) {
            case 'A':
                sum += 11;
                break;
            case 'K':
                sum += 4;
                break;
            case 'Q':
                sum += 3;
                break;
            case 'J':
                if (suit == dominant) {
                    sum += 20;
                } else {
                    sum += 2;
                }
                break;
            case 'T':
                sum += 10;
                break;
            case '9':
                if (suit == dominant) {
                    sum += 14;
                }
                break;
            case '8':
                break;
            case '7':
                break;
        }
    }
    cout << sum << endl;
    return 0;
}