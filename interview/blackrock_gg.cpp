#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {9, 8, 7, 6, 10, 11, 12, 13};

    // Linear Approach
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])) - 1; i++) {
        if (arr[i] == 12) {
            cout << "Element found at index " << i << endl;
            break;
        }
    }

    // Binary Approach
    int i = 0;
    int j = sizeof(arr) / sizeof(arr[0]) - 1;
    while (i != j) {
        if (arr[(i + j) / 2] == 12) {
            cout << "Element found at index " << (i + j) / 2 << endl;
            break;
        } else if (arr[(i + j) / 2] < 12) {
            i = (i + j) / 2 + 1;
        } else {
            j = (i + j) / 2 - 1;
        }
    }
    return 0;
}