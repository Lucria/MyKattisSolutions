//External Student Ernest

#include <iostream>
#include "kattis.h"

using namespace std;


Arr<Flt> ranks = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 20, 22, 24, 26, 29, 32, 36, 40, 45, 50,
				  60, 75, 100};

class Reference {
private:
	Flt score;
	Flt count;

public:
	Reference* Init() {
		score += ranks.Length() == 0 ? Flt(0) : ranks.Pop();
		count = 1;
		return this;
	}

	Reference* Increase() {
		score += ranks.Length() == 0 ? Flt(0) : ranks.Pop();
		count += 1;
		return this;
	}

	Int Score() {
		return (score / count).Ceil();
	}
};

class Score {
private:
	Int bonus;
	Flt solves;
	Flt penalty;
	Flt time;
	Int original;
	Reference* score;
public:
	Int Compare(Score other) {
		if (solves != other.solves) return (solves - other.solves).ToInt();
		if (penalty != other.penalty) return (other.penalty - penalty).ToInt();
		return (other.time - time).ToInt();
	}

	Score(Int bonus, Flt solves, Flt penalty, Flt time, Int original) {
		this->bonus = bonus;
		this->solves = solves;
		this->penalty = penalty;
		this->time = time;
		this->original = original;
	}

	Int index() {
		return original;
	}

	void SetScore(Reference *r) {
		score = r;
	}

	Int GetScore() {
		return score->Score() + bonus;
	}

	Boo IsEqual(Score other) {
		return penalty == other.penalty && solves == other.solves && time == other.time;
	}

	Reference* GetRef() {
		return score;
	}
};


int main() {
	int n;
	cin >> n;
	Arr<Score> scores = {};
	for (int i = 0; i < n; ++i) {
		int a, b, c;
		double d;
		cin >> a >> b >> c >> d;
		scores.Push(Score(d, a, b, c, i));
	}
	scores.Sort([](Score a, Score b) { return a.Compare(b) > 0; });
	scores.value.at(0).SetScore((new Reference())->Init());
	Score prev = scores[0];
	for (int j = 1; j < n; ++j) {
		Score &s = scores.value[j];
		if (s.IsEqual(prev)) {
			s.SetScore(prev.GetRef()->Increase());
		} else {
			s.SetScore((new Reference())->Init());
		}
		prev = s;
	}
	scores.SortNumerically(Ascending, [](Score x) { return x.index(); })
			.Map<Int>([](Score x, int i) { return x.GetScore(); }).Print();
	return 0;
}