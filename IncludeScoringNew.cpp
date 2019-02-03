#include <iostream>
#include <math.h>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct contestant {
    int probSolved = 0;
    int timePenalty = 0;
    int timeSubmitted = 0;
    int extraPoints = 0;
    int score = 0;
};

bool comparePeople(contestant a, contestant b) {
    if (a.probSolved == b.probSolved) {
        if (a.timePenalty == b.timePenalty) {
            return (a.timeSubmitted < b.timeSubmitted);
        }
        return (a.timePenalty < b.timePenalty);
    }
    return (a.probSolved > b.probSolved);
}

int main() {
    int cases;
    cin >> cases/;
    vector<int> scores = {
            100, 75, 60, 50, 45, 40, 36, 32, 29, 26, 24, 22, 20, 18, 16,
            15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
    };
    vector<contestant> sorted;
    for (int i = 0; i < cases; i++) {
        contestant input;
        cin >> input.probSolved >> input.timePenalty >> input.timeSubmitted >> input.extraPoints;
        sorted.push_back(input);
    }
    vector<contestant> original;
    original = sorted;
    sort(sorted.begin(), sorted.end(), comparePeople);
    /*for (auto i: sorted) {
        cout << i.probSolved << " " << i.timePenalty << " " << i.timeSubmitted << " " << i.extraPoints << endl;
    }*/
    int indexbelow30 = 0;
    int scoresum = 0;
    int same = 1;
    int basecheck1 = sorted.at(0).probSolved;
    int basecheck2 = sorted.at(0).timePenalty;
    int basecheck3 = sorted.at(0).timeSubmitted;
    for (int i = 1; i <= cases; i++) {
        int check1 = sorted[i].probSolved;
        int check2 = sorted[i].timePenalty;
        int check3 = sorted[i].timeSubmitted;
        if (check1 == basecheck1 && check2 == basecheck2 && check3 == basecheck3) {
            if (indexbelow30 < 30) {
                scoresum += scores[indexbelow30++];
                same += 1;
            } else {
                same += 1;
            }

        } else {
            basecheck1 = check1;
            basecheck2 = check2;
            basecheck3 = check3;
            if (same != 1) {
                if(indexbelow30 < 30) {
                    scoresum += scores[indexbelow30++];
                }
                for (int j = 1; j <= same; j++) {
                    sorted[i-j].score = (int)ceil((double)scoresum/same) + sorted[i-j].extraPoints;
                }
                same = 1;
                scoresum = 0;
            } else {
                if (indexbelow30 < 30) {
                    int score = scores[indexbelow30++] + sorted[i-1].extraPoints;
                    sorted[i-1].score = score;
                } else {
                    int score = 0 + sorted[i-1].extraPoints;
                    sorted[i-1].score = score;
                }
            }
        }
    }
    for (auto i: original) {
        for (auto j: sorted) {
            if ((i.probSolved == j.probSolved) && (i.timeSubmitted == j.timeSubmitted) && (i.timePenalty == j.timePenalty) && (i.extraPoints == j.extraPoints)) {
                cout << j.score << endl;
                break;
            }
        }
    }

    return 0;
}
