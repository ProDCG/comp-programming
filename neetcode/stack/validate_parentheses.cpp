#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> val;
        unordered_map<char, char> parens = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (const auto& c : s) {
            if (parens.find(c) != parens.end()) {
                if (val.empty() || val.top() != parens[c]) return false;
                val.pop();
            } else {
                val.push(c);
            }
        }

        return val.empty();
    }
};
