#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> nums(n, -1);
    for (int i = 0; i < n - 1; ++i) {
        int num; 
        cin >> num;
        nums[num - 1] = 0;
    }
    for (int i = 0; i < n; ++i) {
        if (nums[i] == -1) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}