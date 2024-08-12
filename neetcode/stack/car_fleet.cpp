#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<double, double>> cars(n);
        for (int i = 0; i < n; i++) {
            cars[i] = {position[i], speed[i]};
        }
        sort(cars.begin(), cars.end(), [](const pair<double, double>& a, const pair<double, double> & b) {
            return b.first < a.first;
        });

        int fleets = 0;
        vector<double> times(n);
        for (int i = 0; i < n; i++) {
            times[i] = (target - cars[i].first) / cars[i].second;
            if (i >= 1 && times[i] <= times[i - 1]) {
                times[i] = times[i - 1];
            } else {
                fleets++;
            }
        }

        return fleets;
    }
};
