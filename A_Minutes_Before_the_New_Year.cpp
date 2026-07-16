#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int case;
    cin >> t;

    while (t--) {
        int h, m;
        cin >> h >> m;

        cout << 1440 - (h * 60 + m) << endl;
    }

    return 0;
}