#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>
using ll = long long;
using namespace std;

long long H(long long previousHash, string &transaction,
            long long token) {
  long long v = previousHash;
  for (int i = 0; i < transaction.length(); i++) {
    v = (v * 31 + transaction[i]) % 1000000007;
  }
  return (v * 7 + token) % 1000000007;
}

ll getToken (ll previousHash, string &transaction) {
    ll temp = previousHash;
    for (int i =0; i < transaction.length(); i++) {
        temp = (temp * 31 + transaction[i]) % 1000000007;
    }
    return (temp * 7 + 
}

int main() {
    ll input;
    cin >> input;

    return 0;
}