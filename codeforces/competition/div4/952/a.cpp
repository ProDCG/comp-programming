#include <iostream>
using namespace std;

#define ll long long

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s1, s2;
        cin >> s1 >> s2;

        char t = s1[0];
        s1[0] = s2[0];
        s2[0] = t;

        cout << s1 << ' ' << s2 << '\n';
    }


    return 0;
}