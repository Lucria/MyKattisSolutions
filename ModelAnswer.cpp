#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

struct Ct {
    int s, p, f;
    int name;

    Ct(int s, int p, int f, int name) : s(s), p(p), f(f), name(name) {}

    bool operator<(const Ct& other) const {
        return make_tuple(-s, p, f) < make_tuple(-other.s, other.p, other.f);
    }
};

vi Scores = {
        100, 75, 60, 50, 45, 40, 36, 32, 29, 26, 24, 22, 20, 18, 16,
        15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
};

int main() {
    assert(sz(Scores) == 30);

    cin.sync_with_stdio(0); cin.tie(0);
    cin.exceptions(cin.failbit);

    int N;
    cin >> N;

    vi scores(N);
    vector<Ct> C;

    rep(i,0,N) {
        int s, p, f, o;
        cin >> s >> p >> f >> o;
        scores[i] += o;
        C.emplace_back(s, p, f, i);
    }

    sort(all(C));


    int sc = 0;
    vector<Ct> cur;
    auto doAdd = [&](){
        if (cur.empty()) return;
        int ts = sz(cur);
        int tc = (sc + ts - 1) / ts;
        trav(it, cur) scores[it.name] += tc;
        cur.clear();
        sc = 0;
    };
    rep(i,0,N) {
        if (!cur.empty() && cur.back() < C[i]) {
            doAdd();
        }
        cur.push_back(C[i]);
        sc += i >= 30 ? 0 : Scores[i];
    }
    doAdd();
    trav(it, scores) cout << it << endl;
}
