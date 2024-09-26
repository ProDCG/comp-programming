#include <bits/stdc++.h>
using namespace std;

int main() {

    std::vector<int> scores = {45, 67, 89, 23, 99, 15, 76, 82, 54};

    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    for (int score : scores) {
        if (minHeap.size() < 5) {
            minHeap.push(score);
        } else if (score > minHeap.top()) {
            minHeap.pop();
            minHeap.push(score);
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << minHeap.top() << endl;
        minHeap.pop();
    }


    return 0;
}