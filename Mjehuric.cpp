#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

void printArr(int arr[]) {
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                printArr(arr);
            }
        }
    }
}