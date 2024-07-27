#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rows;
        unordered_map<int, unordered_set<char>> cols;
        unordered_map<int, unordered_set<char>> square;

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                char num = board[r][c];
                if (num == '.') continue;

                if (rows[r].count(num) || cols[c].count(num) || square[(r / 3) * 3 + (c / 3)].count(num)) return false;

                rows[r].insert(num);
                cols[c].insert(num);
                square[(r / 3) * 3 + (c / 3)].insert(num);
            }
        }

        return true;
    }
};
