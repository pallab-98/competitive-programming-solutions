#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> t;

    while (t--) {
        ll r, b, d;
        cin >> r >> b >> d;

        ll mn = min(r, b);
        ll mx = max(r, b);

        if (mx <= mn * (d + 1))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}