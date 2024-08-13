#include <bits/stdc++.h>
using namespace std;

long long solve(int l, int r, const vector<int>& a, const string& s, vector<vector<long long>>& memo) {
    if (l >= r) {
        return 0;
    }

    if (memo[l][r] != -1) {
        return memo[l][r];
    }

    long long max_score = 0;

    for (int i = l; i < r; ++i) {
        if (s[i] == 'L') {
            for (int j = i + 1; j <= r; j++) {
                if (s[j] == 'R') {
                    long long current = 0;
                    for (int k = i; k <= j; ++k) {
                        current += a[k];
                    }

                    long long remaining = solve(i + 1, j - 1, a, s, memo);

                    max_score = max(max_score, current + remaining);
                }
            }
        }
    }

    memo[l][r] = max_score;
    return max_score;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        string s;
        cin >> s;

        vector<vector<long long>> memo(n, vector<long long>(n, -1));

        long long result = solve(0, n - 1, a, s, memo);
        cout << result << endl;
    }

    return 0;
}