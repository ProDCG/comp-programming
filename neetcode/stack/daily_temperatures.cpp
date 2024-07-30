#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> tempIndices(temperatures.size(), 0);
        stack<pair<int, int>> stack;

        for (int i = 0; i < temperatures.size(); i++) {
            int t = temperatures[i];
            while (!stack.empty() && t > stack.top().first) {
                auto pair = stack.top();
                stack.pop();
                tempIndices[pair.second] = i - pair.second;
            }
            stack.push({t, i});
        }

        return tempIndices;
    }
};
