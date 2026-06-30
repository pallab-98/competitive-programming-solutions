#include <bits/stdc++.h>
using namespace std;

bool isGood(long long n) {
    bool seen[10] = {false};
    int cnt = 0;

    while (n > 0) {
        int d = n % 10;
        if (!seen[d]) {
            seen[d] = true;
            cnt++;
        }
        n /= 10;
    }

    return cnt <= 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;

        bool found = false;

        for (int digit = 1; digit <= 9 && !found; digit++) {
            long long y = 0;

            for (int len = 1; len <= 10; len++) {
                y = y * 10 + digit;

                if (y > 1000000000LL)
                    break;

                if (isGood(x * y)) {
                    cout << y << '\n';
                    found = true;
                    break;
                }
            }
        }
    }

    return 0;
}