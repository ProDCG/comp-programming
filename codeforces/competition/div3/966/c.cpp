#include <bits/stdc++.h>
using namespace std;

bool valid(const vector<int>& a, const string input) {
    if (a.size() != input.size()) return false;
    unordered_map<int, char> corr1;
    unordered_map<char, int> corr2;

    for (int i = 0; i < a.size(); i++) {
        int c = a[i];
        char d = input[i];

        if (corr1.count(c)) {
            if (corr1[c] != d) return false;
        } else corr1[c] = d;

        if (corr2.count(d)) {
            if (corr2[d] != c) return false;
        } else corr2[d] = c;
    }

    return true;
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

        int m;
        cin >> m;
        for (int i = 0; i < m; i++) {
            string input;
            cin >> input;

            if (valid(a, input)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }

        
    }



    return 0;
}