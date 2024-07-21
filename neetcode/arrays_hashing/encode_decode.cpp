#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        for (string str : strs) {
            result += to_string(str.size()) + '#' + str;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> res{};
        int i = 0;
        while (i < s.length()) {
            int tag = 0;
            while (s[i + tag] != '#') {
                tag++;
            }

            int str_size = stoi(s.substr(i, tag));
            res.push_back(s.substr(i + tag + 1, str_size));
            i += tag + str_size + 1;
        }
        return res;
    }
};
