#include <iostream>
using namespace std;

int main() {

    int i, j;
    string s;
    int height, lateral;

    for (int i = 0; i < 5; i++) {
        getline(std::cin, s);
        int ind = s.find("1");
        if (ind != s.npos) {
            lateral = (ind + 1) / 2;
            height = i;
            break;
        }
    }

    cout << abs(height - 2) + abs(lateral - 2) << '\n';

    return 0;
}