#include <iostream>
using namespace std;

int main() {

    int n, m, a;
    cin >> n >> m >> a;

    long long x = n / a + (n % a != 0);
    long long y = m / a + (m % a != 0);

    cout << x * y << endl;

    return 0;
}