// Done by Jerry Zhang Zhuoran
// A0187394M

#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <tuple>

using namespace std;

/**
 * X is folded
 * Y is fist
 * Z is palm
 */

int main() {
    int syllabus, players;
    cin >> syllabus >> players;
    int selected = 0;
    list <tuple <int, char> > everyone;
    for (int i = 0; i < players; i++) {
        tuple <int, char> human;
        human = make_tuple(i, 'x');
        everyone.push_back(human);
    }
    while (everyone.size() != 1) {
        //cout << get<0>(everyone.front()) << " " << get<1>(everyone.front()) << endl;
        //everyone.pop_front();
        int listsize = (int)everyone.size();
        selected = (selected + syllabus - 1) % listsize;
        auto iter = everyone.begin();
        advance(iter, selected);

        if (get<1>(*iter) == 'x') {
            get<1>(*iter) = 'y';
            int numplayer = get<0>(*iter);
            everyone.insert(iter, make_tuple(numplayer, 'y'));
        } else if (get<1>(*iter) == 'y') {
            get<1>(*iter) = 'z';
            selected++;
        } else if (get<1>(*iter) == 'z') {
            everyone.erase(iter);
        }
    }
    cout << get<0>(everyone.front()) + 1 << endl;
    return 0;
}