#include <iostream>
using namespace std;

#define ll long long

int main() {
    string vowels = "AOYEUI";
    string input;
    cin >> input;

    for (int i = 0; i < input.size(); i++) {
        if (vowels.find(input[i]) != vowels.npos) {
            input = input.substr(0, i) + input.substr(i + 1, input.size());
            i--;
        } else if (isupper(vowels.find(input[i]))) {
            input[i] = tolower(vowels.find(input[i]));
        }
    }

    return 0;
}