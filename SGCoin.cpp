#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>
using ll = long long;
using namespace std;

ll H(ll previousHash, string &transaction, ll token)
{
    ll v = previousHash;
    for (int i = 0; i < transaction.length(); i++)
    {
        v = (v * 31 + transaction[i]) % 1000000007;
    }
    return (v * 7 + token) % 1000000007;
}

ll getToken(ll previousHash, string &transaction)
{
    ll temp = previousHash; // 140000000 → 930000000 → 730000000
    for (int i = 0; i < transaction.length(); i++)
    {
        temp = (temp * 31 + transaction[i]) % 1000000007;
    }
    // cout << "Temp: " << temp << endl;
    return (20000000 - temp * 7 % 1000000007 + 2000000014) % 1000000007;
}

int main()
{
    ll input;
    cin >> input;
    string a = "alice";
    string b = "bob";

    ll token1 = getToken(input, a);
    // cout << "Token: " << token1 << endl;
    ll hash1 = H(input, a, token1); //930000000
    // cout << "Hash1 " << hash1 << endl;
    ll token2 = getToken(hash1, b);
    // cout << "Token2: " << token2 << endl;
    ll hash2 = H(hash1, b, token2); //730000000 
    // cout << "Hash2: " << hash2 << endl;
    
    cout << a << ' ' << token1 << '\n';
    cout << b << ' ' << token2 << '\n';
    return 0;
}