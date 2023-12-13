#include <bits\stdc++.h>
using namespace std;

#define ll long long

int main() {
    int test, races;

    map<int, int> posToPts = {
        {1, 25},
        {2, 18},
        {3, 15},
        {4, 12},
        {5, 10},
        {6, 8},
        {7, 6},
        {8, 4},
        {9, 2},
        {10, 1},
    };

    cin >> test;

    while (test--) {
        cin >> races;

        int pt1 = 0, pt2 = 0;

        for (int i = 0; i < races; i++) {
            int pos;
            cin >> pos;
            pt1 += posToPts[pos];
            pt2 += posToPts[(pos > 1 ? 1 : 2)];
        }

        cout << ((pt1 >= pt2) ? "Champion" : "Practice harder") << '\n';
    }

    return 0;
}