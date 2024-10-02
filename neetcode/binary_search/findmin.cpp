#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int> &nums) {
        int left = 0;
        int right = nums.size() - 1;
        int res = nums[0];

        while (left <= right) {
            if (nums[left] < nums[right]) {
                res = min(res, nums[left]);
                break;
            }

            int mid = left + (right - left) / 2;
            res = min(res, nums[mid]);

            if (nums[left] <= nums[mid]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return res;
    }
};
