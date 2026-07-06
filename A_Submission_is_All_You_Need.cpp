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

        int sum = 0;
        bool hasZero = false;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;

            if (x == 0)
                hasZero = true;
        }

        cout << sum + (hasZero ? 1 : 0) << '\n';
    }

    return 0;
}