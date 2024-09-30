#include <bits/stdc++.h>
using namespace std;

// O(m+n) time, O(1) space

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int midx = m - 1;
        int nidx = n - 1;
        int ridx = m + n - 1;

        while (nidx >= 0) {
            if (midx >= 0 && nums1[midx] > nums2[nidx]) {
                nums1[ridx] = nums1[midx];
                midx--;
            } else {
                nums1[ridx] = nums2[nidx];
                nidx--;
            }
            ridx--;
        }
    }
};