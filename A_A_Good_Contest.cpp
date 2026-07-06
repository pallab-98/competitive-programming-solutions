#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    bool ok = false;

    while (caseTest--) {
        string name;
        int before, after;

        cin >> name >> before >> after;

        if (before >= 2400 && after > before)
            ok = true;
    }

    cout << (ok ? "YES" : "NO");

    return 0;
}