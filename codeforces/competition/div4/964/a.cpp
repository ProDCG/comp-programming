#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        // take the sum of the digits
        int sum = 0;
        for(int i = 0; i < s.size(); i++) {
            sum += s[i] - '0';
        }
        cout << sum << endl;
    }
    return 0;
}