#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

bool validate(const std::vector<int> plants, const std::vector<int> rates, const std::vector<int> taller, ll days) {
    std::vector<int> forward = plants;
    for (int i = 0; i < plants.size(); i++) {
        forward[i] += rates[i] * days;
    }

    std::sort(forward.begin(), forward.end(), [](int a, int b) {
        return a > b;
    });

    for (int i = 0; i < forward.size(); ++i) {
        if (i < taller[i] || (forward.size() - i - 1) < taller[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;

    std::cin >> T;
    while (T--) {
        ll nPlant;
        
        std::cin >> nPlant;
        std::vector<int> plants(nPlant);
        std::vector<int> plantRate(nPlant);
        std::vector<int> nTaller(nPlant);

        for (ll k = 0; k < nPlant; k++) {
            std::cin >> plants[k];
        }

        for (ll k = 0; k < nPlant; k++) {
            std::cin >> plantRate[k];
        }

        for (ll k = 0; k < nPlant; k++) {
            std::cin >> nTaller[k];
        }

        ll left = 0, right = 1e9, minDays = -1;
        while (left <= right) {
            ll mid = left + (right - left) / 2;
            if (validate(plants, plantRate, nTaller, mid)) {
                minDays = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        std::cout << minDays << '\n';
    }
    
    return 0;
}