#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int left = 0;
        int res = 0;
        for (int r = 0; r < s.size(); r++) {
            while (charSet.find(s[r]) != charSet.end()) {
                charSet.erase(s[left]);
                left++;
            }
            charSet.insert(s[r]);
            res = max(res, r - left + 1);
        }
        return res;
    }
};