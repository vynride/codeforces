#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        vector<int> arr(7);
        vector<int> pref(7, 0);
        for (int i = 0; i < 7; i++) {
            cin >> arr[i];

            for (int j = 0; j < 7; j++) {
                if (j != i) {
                    pref[j] += (arr[i]);
                }
            }
        }

        int maxi = -1 * pref[0] + arr[0];

        for (int i = 1; i < 7; i++) {
            maxi = max(maxi, -1 * pref[i] + arr[i]);
        }

        cout << maxi << '\n';
    }
}