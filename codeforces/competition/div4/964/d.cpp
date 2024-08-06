#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        string s, t;
        cin >> s >> t;

        int j = 0;
        string res = s;
        bool done = false;
        for (int i = 0; i < s.length(); i++) {
            if (res[i] == '?') {
                if (j < t.length()) {
                    res[i] = t[j++];
                } else {
                    res[i] = 'a';
                }
            }
        }

        int slen = s.length(), tlen = t.length();
        int k = 0;
        for (int i = 0; i < slen && j < tlen; ++i) {
            if (s[i] == t[j]) {
                k++;
            }
        }
        if(j == tlen) {
            cout << "YES" << endl;
            cout << res << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}