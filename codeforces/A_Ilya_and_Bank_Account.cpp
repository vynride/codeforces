#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    if (n > 0)
        cout << n << '\n';
    else {
        int t1 = n, t2 = n;
        t1 = n / 10;
        t2 = n % 10 + (n / 100) * 10;

        cout << max(t1, t2) << '\n';
    }
}