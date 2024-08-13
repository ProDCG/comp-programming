#include <bits/stdc++.h.>
using namespace std;

#define ll long long

bool done(const vector<int>& a) {
    unordered_set<int> b;
    b.insert(a[0]);

    for (int i = 1; i < a.size(); i++) {
        int cur = a[i];
        if (b.count(cur - 1) == 0 && b.count(cur + 1) == 0) {
            return false;
        }
        b.insert(cur);
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

        if (done(a)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}