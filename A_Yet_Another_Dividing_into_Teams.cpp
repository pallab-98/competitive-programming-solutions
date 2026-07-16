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

        vector<int> a(len);

        for (int i = 0; i < len; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        bool needTwoTeams = false;

        for (int i = 1; i < len; i++) {
            if (a[i] - a[i - 1] == 1) {
                needTwoTeams = true;
                break;
            }
        }

        cout << (needTwoTeams ? 2 : 1) << endl;
    }

    return 0;
}