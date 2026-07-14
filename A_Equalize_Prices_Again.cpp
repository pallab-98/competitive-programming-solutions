#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while (q--) {
        int n;
        cin >> n;

        long long sum = 0;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            sum += x;
        }

        cout << (sum + n - 1) / n << '\n';
    }

    return 0;
}