#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>
#include <list>
#include <stack>

using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define M_PI 3.14159265358979323846

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int row, column;
    int zrow, zcolumn;
    cin >> row >> column >> zrow >> zcolumn;
    vector <vector <char>> article;
    article.resize(row);
    for (auto &i : article) {
        i.resize(column);
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> article[i][j];
        }
    }

    for (int i = 0; i < row * zrow; i++) {
        for (int j = 0; j < column * zcolumn; j ++) {
            cout << article[i/zrow][j/zcolumn];
        }
        cout << endl;
    }
    return 0;
}