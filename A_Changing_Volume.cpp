#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--) {
        int a, b;
        cin >> a >> b;

        int diff = abs(a - b);

        int ans = diff / 5;
        diff %= 5;

        ans += diff / 2;
        diff %= 2;

        ans += diff;

        cout << ans << '\n';
    }

    return 0;
}