#include <bits/stdc++.h>
using namespace std;

int a[105], n, i=2;

int main() {
    
    while(cin>>a[n++]);
    sort(a, a+n);

    cout << a[1];

    for (;i<n;i++) {
        cout << '+' << a[i];
    }

    return 0;

}