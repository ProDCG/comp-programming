#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;
        int vol = 0;
        while (l < r) {
            int curr = (r - l) * min(heights[l], heights[r]);
            vol = max(vol, curr);
            if (heights[r] < heights[l]) {
                r--;
            } else {
                l++;
            }
        }
        return vol;
    }
};
