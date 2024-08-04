#include <iostream>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int maxsum = 0, index = -1;
        for (int i = 2; i <= n; i++) {
            int sum = 0;
            for (int j = 1; j*i <= n; j++) {
                sum+= i*j;
            }

            if (sum > maxsum) {
                maxsum = sum;
                index = i;
            }
        }

        cout << index << '\n';

    }

    return 0;
}   