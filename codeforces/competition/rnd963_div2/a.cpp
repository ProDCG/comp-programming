#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int score = 0;
        int count;
        cin >> count;
        string answers;
        cin >> answers;

        map<char, int> freq;

        for (char c : answers) {
            freq[c]++;
        }

        score += min(count, freq['A']);
        score += min(count, freq['B']);
        score += min(count, freq['C']);
        score += min(count, freq['D']);

        cout << score << endl;
    }

    return 0;
}