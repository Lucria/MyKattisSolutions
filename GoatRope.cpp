#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>
#include <sstream>
#include <list>
#include <stack>
#include <set>
#include <queue>
#include <map>
#include <unordered_map>

using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define M_PI 3.14159265358979323846

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int x, y, x1, y1, x2, y2;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    double d = 0;
    if (x > x1 and x < x2 and y > y2)
    {
        d = y - y2;
    }
    else if (x > x2 and y > y2)
    {
        d = hypot(x - x2, y - y2);
    }
    else if (x > x2 and y > y1 and y < y2)
    {
        d = x - x2;
    }
    else if (x > x2 and y < y1)
    {
        d = hypot(x - x2, y1 - y);
    }
    else if (x > x1 and x < x2 and y < y1)
    {
        d = y1 - y;
    }
    else if (x < x1 and y < y1)
    {
        d = hypot(x1 - x, y1 - y);
    }
    else if (x < x1 and y > y1 and y < y2)
    {
        d = x1 - x;
    }
    else if (x < x1 and y > y2)
    {
        d = hypot(x1 - x, y - y2);
    }
    cout << d << endl;
    return 0;
}