#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int x = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1])
                x += 1;
        }

        int min_len = x;

        for (int i = 1; i < n - 1; i++) {
            int t = x;
            if (s[i] == s[i - 1] || s[i] == s[i + 1])
                continue;
            if (s[i - 1] == s[i + 1])
                t -= 2;
            else
                t -= 1;

            min_len = min(min_len, t);
        }

        cout << min_len << endl;
    }
}