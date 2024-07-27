#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        for (string s : tokens) {
            if (s == "+") {
                int a = nums.top(); nums.pop();
                int b = nums.top(); nums.pop();
                nums.push(b + a);
            } else if (s == "-") {
                int a = nums.top(); nums.pop();
                int b = nums.top(); nums.pop();
                nums.push(b - a);
            } else if (s == "*") {
                int a = nums.top(); nums.pop();
                int b = nums.top(); nums.pop();
                nums.push(b * a);
            } else if (s == "/") {
                int a = nums.top(); nums.pop();
                int b = nums.top(); nums.pop();
                nums.push(b / a);
            } else {
                nums.push(stoi(s));
            }
        }
        return nums.top();
    }
};
