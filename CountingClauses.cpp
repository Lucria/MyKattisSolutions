#include <iostream>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    int ram[1000];
    for (int a = 0; a < 1000; a++) {
        ram[a] = 0;
    }
    int regis[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int first, second, third;
    int i = 0;
    int count = 0;

    while (cin >> ram[count++]) {}

    for (count = 1; ; count++) {
        first = ram[i] / 100;
        second = ram[i] / 10 % 10;
        third = ram[i] % 10;
        i++;
        if (first == 1) {
            break;
        }
        if (first == 2) {
            regis[second] = third;
        }
        else if (first == 3) {
            regis[second] = (regis[second] + third) % 1000;
        }
        else if (first == 4) {
            regis[second] = (regis[second] * third) % 1000;
        }
        else if (first == 5) {
            regis[second] = regis[third];
        }
        else if (first == 6) {
            regis[second] = (regis[second] + regis[third]) % 1000;
        }
        else if (first == 7) {
            regis[second] = (regis[second] * regis[third]) % 1000;
        }
        else if (first == 8) {
            regis[second] = ram[regis[third]];
        }
        else if (first == 9) {
            ram[regis[third]] = regis[second];
        }
        else if (first == 0 && regis[third] != 0) {
            i = regis[second];
        }
    }
    cout << count << endl;
}