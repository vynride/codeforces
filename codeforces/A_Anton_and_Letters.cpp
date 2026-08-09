#include<bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    getline(cin, s);

    int n = s.size();
    unordered_set<char>uset;

    for (int i = 1; i < n; i+=3) {
        if (s[i] != '{' && s[i] != '}' && s[i] != ',')
            uset.insert(s[i]);
    }

    cout << uset.size() << endl;
}