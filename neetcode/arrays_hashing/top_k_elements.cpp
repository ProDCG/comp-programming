#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Declare our map and the frequencies
        unordered_map<int, int> amt;
        vector<vector<int>> freq(nums.size() + 1);

        // Store the count for each number
        for (int num : nums) {
            amt[num] = amt[num] + 1;
        }

        // Push everything back by the count
        for (const auto& entry : amt) {
            freq[entry.second].push_back(entry.first);
        }

        // Grab the top k elements
        vector<int> res;
        for (int i = freq.size() - 1; i > 0; i--) {
            for (int n : freq[i]) {
                res.push_back(n);
                if (res.size() == k) return res;
            }
        }

        return res;
    }
};
