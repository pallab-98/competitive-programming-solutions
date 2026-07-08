#include <bits/stdc++.h>
using namespace std;

int main() {
    int caseTest;
    cin >> caseTest;

    while (caseTest--) {
        int n;
        cin >> n;

        int ans = 0;

        while (n--) {
            int a, b;
            cin >> a >> b;

            if (a > b)
                ans++;
        }

        cout << ans << endl;
    }

    return 0;
}