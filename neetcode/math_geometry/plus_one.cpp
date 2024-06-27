#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int i = digits.size() - 1;

        while (carry) {
            if (i >= 0) {
                if (digits[i] == 9) digits[i] = 0;
                else {
                    digits[i]++;
                    carry = 0;
                }
            } else {
                digits.emplace(digits.begin(), carry);
                carry = 0;
            }

            i--;
        }

        return digits;
    }
};
