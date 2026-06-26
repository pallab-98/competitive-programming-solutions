#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int pos = 0, neg = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) pos += (a[i] - b[i]);
            else neg += (b[i] - a[i]);
        }

        cout << max(pos, neg) << "\n";
    }

    return 0;
}