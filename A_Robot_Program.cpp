#include <bits/stdc++.h>
using namespace std;

int main() {
    int caseTest;
    cin >> caseTest;

    while (t--) {
        int x, y;
        cin >> x >> y;

        if (x == 0 && y == 0) {
            cout << 0 << '\n';
            continue;
        }

        int mx = max(x, y);
        int mn = min(x, y);

        if (mx == mn)
            cout << 2 * mx << '\n';
        else if (mx == mn + 1)
            cout << 2 * mx - 1 << '\n';
        else
            cout << 4 * mx - 2 * mn - 3 << '\n';
    }

    return 0;
}