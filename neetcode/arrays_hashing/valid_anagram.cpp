#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        
        unordered_map<char, int> sm;
        unordered_map<char, int> tm;

        for (int i = 0; i < s.size(); i++) {
            sm[s[i]]++;
            tm[t[i]]++;
        }

        for (auto& pair : sm) {
            char key = pair.first;
            if (sm[key] != tm[key]) return false;
        }

        return true;
    }
};
