#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        generate(n, 0, 0, "", res);
        return res;
    }

    void generate(int n, int openN, int closedN, string current, vector<string>& res) {
        if (openN == closedN && openN == n) {
            res.push_back(current);
            return;
        }

        if (openN < n) {
            generate(n, openN + 1, closedN, current + '(', res);
        }

        if (closedN < openN) {
            generate(n, openN, closedN + 1, current + ')', res);
        }
    }
};
