#include <iostream>
using namespace std;

#define ll long long

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;

        int* interval = new int[n];
        int start = 0;
        bool canShower = false;



        // n tasks, s minutes to shower, m minutes
        for (int i = 0; i < n; i++) {
            int l, r;
            cin >> l >> r;

            if (l - start >= s) {
                canShower = true;
            }
            // for (int j = l; j <= r; j++) {
            //     interval[j] = 1;
            // }

            start = r;
        }

        if (m - start >= s) {
            canShower = true;
        }

        if (canShower) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}