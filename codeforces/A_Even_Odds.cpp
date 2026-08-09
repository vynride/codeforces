#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long n, k;
    cin >> n >> k;

    long long limit = n % 2 == 0 ? (n / 2) : (n / 2 + 1);
    if (k <= limit) {
        cout << 2 * (k - 1) + 1 << endl;
    }

    else {
        cout << (k - limit) * 2 << endl;
    }
}