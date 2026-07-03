#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int ans = 0;

    while (n--) {
        int x;
        cin >> x;

        int cnt = 0;

        while (x > 0) {
            int digit = x % 10;
            if (digit == 4 || digit == 7)
                cnt++;
            x /= 10;
        }

        if (cnt <= k)
            ans++;
    }

    cout << ans << '\n';

    return 0;
}