#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;
    int iter = s.length() / 2;

    cout << s[s.length() - 1];

    for (int i = iter; i > 0; i--) {
        cout << '+' << s[i * 2 - 2];
    }


    return 0;
}