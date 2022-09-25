#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int count = 0, len = 0;
    char currentChar = '';
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == currentChar) {
            count++;
        } else {
            if (count > len) {
                len = count;
            }
            count = 1;
            currentChar = str[i];
        }
    }
    cout << len << endl;
    return 0;
}