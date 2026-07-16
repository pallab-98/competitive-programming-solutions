#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        int ans = max({
            x * b,
            (a - x - 1) * b,
            a * y,
            a * (b - y - 1)
        });

        cout << ans << '\n';
    }

    return 0;
}