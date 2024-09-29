#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

int main() {

    int t;
    cin >> t;
    int exp = 0;
    int opers = 0;

    while (t--) {
        int n, k;
        cin >> n >> k;
        while (n > 0) {
            while (pow(k, exp) <= n) {
                // cout << exp << endl;
                exp++;
            }

            exp--;
            // cout << exp << endl;

            n -= pow(k, exp);
            opers++;
        }
        cout << opers << endl;
    }

    return 0;
}
