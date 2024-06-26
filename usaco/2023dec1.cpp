#include <iostream>
#include <vector>
using namespace std;

#define ll long long

int main() {
    ll totalCow, totalCandy;
    cin >> totalCow >> totalCandy;

    vector<ll> cow(totalCow), candy(totalCandy);

    for (ll i = 0; i < totalCow; i++) {
        cin >> cow[i];
    }

    for (ll i = 0; i < totalCandy; i++) {
        ll height;
        cin >> height;
        ll curH = 0;
        for (int j = 0; j < totalCow; j++) {
            if (curH == height) break;
            else if (cow[j] >= height) {
                ll diff = height - curH;
                cow[j] += diff;
                break;
            } else if (cow[j] > curH) {
                ll diff = cow[j] - curH;
                curH += diff;
                cow[j] += diff;
            }
        }
    }

    for (ll cur : cow) {
        cout << cur << '\n';
    }

    return 0;
}