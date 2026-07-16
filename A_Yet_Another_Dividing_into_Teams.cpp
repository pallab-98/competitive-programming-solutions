#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        bool needTwoTeams = false;

        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] == 1) {
                needTwoTeams = true;
                break;
            }
        }

        cout << (needTwoTeams ? 2 : 1) << '\n';
    }

    return 0;
}