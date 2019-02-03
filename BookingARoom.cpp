#include <iostream>
using namespace std;

int main() {
    int rooms, booked;
    cin >> rooms >> booked;
    int availability[rooms];
    for (int i = 0; i < rooms; i++) {
        availability[i] = 0;
    }
    while(booked--) {
        int taken;
        cin >> taken;
        availability[taken - 1] += 1;
    }
    for (int i = 0; i < rooms; i++) {
        if (availability[i] == 0) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << "too late" << endl;
    return 0;
}