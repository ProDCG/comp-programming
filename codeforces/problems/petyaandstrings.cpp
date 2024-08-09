#include <bits/stdc++.h>
using namespace std;

int main() {

    string a, b;
    cin >> a >> b;

    int a_sum = 0, b_sum = 0;

    for (int i = 0; i < a.size(); i++) {
        char a_char = tolower(a[i]);
        char b_char = tolower(b[i]);

        if (a_char < b_char) {
            cout << -1;
            return 0;

        } else if (b_char < a_char) {
            cout << 1;
            return 0;

        }
    }
    cout << 0;
    return 0;
}