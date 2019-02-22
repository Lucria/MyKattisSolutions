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

# define M_PI 3.14159265358979323846

using namespace std;

struct point {
    double x;
    double y;
    double v;
    string color;
};

double distancecalc(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1 - x2 , 2) + pow(y1 - y2, 2));
}

double radiuscalc(double volume) {
    return sqrt(volume/M_PI);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int cases;
    cin >> cases;
    while (cases--) {
        int numdrops;
        cin >> numdrops;
        vector <point> painting;
        for (int i = 0; i < numdrops; i++) {
            point newpoint;
            cin >> newpoint.x >> newpoint.y >> newpoint.v >> newpoint.color;
            painting.push_back(newpoint);
        }
        int queries;
        cin >> queries;
        for (int i = 0; i < queries; i++) {
            double queryx, queryy;
            cin >> queryx >> queryy;
            string output = "white";
            for (auto j: painting) {
                double dist = distancecalc(queryx, queryy, j.x, j.y);
                double radius = radiuscalc(j.v);
                if (dist < radius) {
                    output = j.color;
                }   
            }
            cout << output << endl;
        }
    }
    return 0;
}