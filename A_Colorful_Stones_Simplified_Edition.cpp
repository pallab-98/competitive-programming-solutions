#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str, t;
    cin >> str >> t;

    int pos = 0;

    for (char c : t) {
        if (c == s[pos])
            pos++;
    }

    cout << pos + 1 << '\n';

    return 0;
}