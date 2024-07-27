#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<int> data;
    stack<int> minData;

    MinStack() {
        
    }
    
    void push(int val) {
        data.push(val);
        int minVal = min(val, minData.empty() ? val : minData.top());
        minData.push(minVal);
    }
    
    void pop() {
        data.pop();
        minData.pop();
    }
    
    int top() {
        return data.top();
    }
    
    int getMin() {
        return minData.top();
    }
};
