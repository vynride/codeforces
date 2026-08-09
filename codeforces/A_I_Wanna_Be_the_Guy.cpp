#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n; cin >> n;
    int p; cin >> p;

    unordered_set<int>uset;
    int k;
    for (int i = 0; i < p; i++) {
        cin >> k; 
        uset.insert(k);
    }

    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> k;
        uset.insert(k);
    }

    if (uset.size() == n) cout << "I become the guy.\n";
    else cout << "Oh, my keyboard!\n";
}