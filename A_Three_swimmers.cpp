#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (t--) {
        ll p, a, b, c;
        cin >> p >> a >> b >> c;

        ll wa = (a - p % a) % a;
        ll wb = (b - p % b) % b;
        ll wc = (c - p % c) % c;

        cout << min({wa, wb, wc}) << '\n';
    }

    return 0;
}