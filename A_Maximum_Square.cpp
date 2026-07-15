#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--) {
        int len;
        cin >> len;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end(), greater<int>());

        int ans = 0;

        for (int i = 0; i < n; i++) {
            ans = max(ans, min(a[i], i + 1));
        }

        cout << ans << '\n';
    }

    return 0;
}