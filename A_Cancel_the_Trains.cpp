#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--) {
        int n, m;
        cin >> n >> m;

        set<int> s;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }

        int ans = 0;
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            if (s.count(x))
                ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}