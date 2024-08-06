#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int l, r, operations = 0;
        cin >> l >> r;


        while (l > 0 || r > 0) {
            int nl, nr;

            if (r > l) {
                nr = r / 3;
                nl = l * 3;
            } else if (l > 0) {
                nl = l / 3;
                nr = 0;
            }

            cout << 'a' << endl;

            l = nl;
            r = nr;

            operations++;
        }
        cout << operations << endl;
    }

    return 0;
}