// Jerry Zhang
// A0187394M
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print(vector<int> stars, int length) {
    int front = 0;
    int back = 0;

    for (auto i: stars) {
        front += i;
        for (int j = 0; j < length - front; j++) {
            cout << ".";
        }
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        for (int j = 0; j < back; j++) {
            cout << ".";
        }
        cout << endl;
        back += i;
    }
    cout << endl;
}

int main() {
    vector<int> stars;
    string row;
    int length;
    while (getline(cin, row)) {
        if (row == "") {
            print(stars, length);
            stars.clear();
        } else {
            length = row.length();
            int numstars = 0;
            for (auto i: row) {
                if (i == '*') {
                    numstars++;
                }
            }
            stars.push_back(numstars);
        }
    }
    print(stars, length);
    return 0;
}