#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    set<char> collec;
    for (char c : s) {
        collec.insert(c);
    }

    if (collec.size() % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";

    return 0;
}