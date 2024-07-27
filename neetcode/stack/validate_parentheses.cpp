#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> parens;
        unordered_map<char, char> brackets = {
            {')', '('},
            {'}', '{'},
            {']', '['}};

        for (char c : s) {
            if (brackets.find(c) != brackets.end()) {
                if (parens.empty()) return false;
                if (parens.top() != brackets[c]) return false;

                parens.pop();
            } else {
                parens.push(c);
            }
        }

        return true;
    }
};
