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

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(nullptr);
        double D, V;
        while(cin >> D >> V, (D||V)) {
            double totalCylinder = pow(D / 2, 2) * D * M_PI; // Calculate the total volume of the big cylinder (beaver's workspace)
            double diff = totalCylinder - V; // The amount of wood remaining
            double coneArea = pow(D / 2, 2) * D / 3 * M_PI; // The volume of the cones left behind by the beaver
            double remaining = diff - coneArea; // The small cylinder in the middle
            double cylinder = remaining * 3/2; // TODO Ask about the Math here
            double radius = pow((cylinder / (2 * M_PI)), (1 / 3.0)); //Calculating radius from volume of cylinder = pi * r^2 * h where h = r
            cout << fixed << setprecision(9) << radius * 2 << endl;
        }
        return 0;
    }