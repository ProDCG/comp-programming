#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, l = 0, r = 0;

        while (r < prices.size()) {
            if (prices[r] > prices[l]) {
                profit = max(profit, prices[r] - prices[l]);
            } else {
                l = r;
            }
            ++r;
        }



        return profit;
    }
};
