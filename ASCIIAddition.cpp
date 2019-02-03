#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

bool CheckPlus(vector<string> &input, int index) {
    vector<string> plus = {
            ".....",
            "..x..",
            "..x..",
            "xxxxx",
            "..x..",
            "..x..",
            "....."};

    bool status = true;
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 5; j++) {
            if (input[i][j + index] != plus[i][j]) {
                status = false;
            }
        }
    }
    return status;
}

vector<string> GetNum(vector<string> &input, int index) {
    vector<string> temp = {".....",
                           ".....",
                           ".....",
                           ".....",
                           ".....",
                           ".....",
                           "....."};
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 5; j++) {
            temp[i][j] = input[i][j + index];
        }
    }
    return temp;
}

int main() {
    vector<vector<string>> numbers;

    numbers.push_back({"xxxxx",
                       "x...x",
                       "x...x",
                       "x...x",
                       "x...x",
                       "x...x",
                       "xxxxx"});

    numbers.push_back({"....x",
                       "....x",
                       "....x",
                       "....x",
                       "....x",
                       "....x",
                       "....x"});

    numbers.push_back({"xxxxx",
                       "....x",
                       "....x",
                       "xxxxx",
                       "x....",
                       "x....",
                       "xxxxx"});

    numbers.push_back({"xxxxx",
                       "....x",
                       "....x",
                       "xxxxx",
                       "....x",
                       "....x",
                       "xxxxx"});

    numbers.push_back({"x...x",
                       "x...x",
                       "x...x",
                       "xxxxx",
                       "....x",
                       "....x",
                       "....x"});

    numbers.push_back({"xxxxx",
                       "x....",
                       "x....",
                       "xxxxx",
                       "....x",
                       "....x",
                       "xxxxx"});

    numbers.push_back({"xxxxx",
                       "x....",
                       "x....",
                       "xxxxx",
                       "x...x",
                       "x...x",
                       "xxxxx"});

    numbers.push_back({"xxxxx",
                       "....x",
                       "....x",
                       "....x",
                       "....x",
                       "....x",
                       "....x"});

    numbers.push_back({"xxxxx",
                       "x...x",
                       "x...x",
                       "xxxxx",
                       "x...x",
                       "x...x",
                       "xxxxx"});

    numbers.push_back({"xxxxx",
                       "x...x",
                       "x...x",
                       "xxxxx",
                       "....x",
                       "....x",
                       "xxxxx"});

    vector<string> input;
    input.resize(7);
    for (auto &i: input) {
        getline(cin, i);
    }

    string num1, num2;

    for (int i = 0; i < input[0].size(); i += 6) {
        if (CheckPlus(input, i)) {
            swap(num1, num2);
        } else {
            char number = '0';
            vector<string> temp = GetNum(input, i);
            for (int j = 0; j < numbers.size(); j++) {
                if (numbers[j] == temp) {
                    number += j;
                }
            }
            num1.push_back(number);
        }
    }

    int sum = stoi(num1) + stoi(num2);
    string strsum = to_string(sum);
    vector<string> answer;
    answer.resize(7);
    for (int i = 0; i < strsum.size(); i++) {
        vector<string> digit = numbers[strsum[i] - '0'];
        for (int j = 0; j < 7; j++) {
            answer[j] += digit[j] + '.';
        }
    }
    for (auto i : answer) {
        i.pop_back();
        cout << i << endl;
    }

    return 0;
}