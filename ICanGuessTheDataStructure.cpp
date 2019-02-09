//Done by Jerry Zhang Zhuoran
//A0187394M

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>
#include <stack>
#include <queue>

using namespace std;

int main() {
    int cases;
    while(cin >> cases) { //Waiting for EOF
        bool qflag = true;
        bool stflag = true;
        bool pqflag = true;
        queue <int> qlist;
        stack <int> stlist;
        priority_queue <int> pqlist;
        while(cases--) {
            int command, value;
            cin >> command >> value;
            if (command == 1) {
                if (qflag) {
                    qlist.push(value);
                }
                if (stflag) {
                    stlist.push(value);
                }
                if (pqflag) {
                    pqlist.push(value);
                }
            } else {
                if (qflag) {
                    if (qlist.empty() || qlist.front() != value) {
                        qflag = false;
                    } else {
                        qlist.pop();
                    }
                }
                if (stflag) {
                    if (stlist.empty() || stlist.top() != value) {
                        stflag = false;
                    } else {
                        stlist.pop();
                    }
                }
                if (pqflag) {
                    if (pqlist.empty() || pqlist.top() != value) {
                        pqflag = false;
                    } else {
                        pqlist.pop();
                    }
                }
            }
        }

        if (!qflag && !stflag && !pqflag) {
            cout << "impossible" << endl;
        } else if (qflag && !stflag && !pqflag) {   
            cout << "queue" << endl;
        } else if (!qflag && stflag && !pqflag) {
            cout << "stack" << endl;
        } else if (!qflag && !stflag && pqflag) {
            cout << "priority queue" << endl;
        } else {
            cout << "not sure" << endl;
        }
    }
    return 0;
}
