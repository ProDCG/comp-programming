#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i != j && ((nums[i] + nums[j]) == target)) return {min(i, j), max(i, j)};
            }
        }

        return {0};
    }
};
