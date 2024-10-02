#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int top = 0;
        int bot = rows - 1;

        while (top <= bot) {
            int row = (top + bot) / 2;
            if (target > matrix[row][cols - 1]) {
                top = row + 1;
            } else if (target < matrix[row][0]) {
                bot = row - 1;
            } else {
                break;
            }
        }

        if (!(top <= bot)) {
            return false;
        }

        int row = (top + bot) / 2;
        int left = 0;
        int right = cols - 1;
        
        while (left <= right) {
            int col = (left + right) / 2;
            if (target > matrix[row][col]) {
                left = col + 1;
            } else if (target < matrix[row][col]) {
                right = col - 1;
            } else {
                return true;
            }
        }

        return false;
    }
};
