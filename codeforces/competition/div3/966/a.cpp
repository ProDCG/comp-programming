#include <iostream>
#include <unordered_set>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    unordered_set<int> possible_numbers;

    // Generate numbers that Dmitry might have written incorrectly
    for (int x = 2; x <= 9; ++x) {  // Since 10^x starts from 100 and goes to large numbers
        possible_numbers.insert(pow(10, x));
    }

    // Check each integer on the board
    for (int i = 0; i < t; ++i) {
        int a;
        cin >> a;
        if (possible_numbers.find(a) != possible_numbers.end()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}