#include<bits/stdc++.h>
using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--) {
        int n, c0, c1, h;
        cin >> n >> c0 >> c1 >> h;

        string s;
        cin >> s;

        long long ans = 0;

        for (char ch : s) {
            if (ch == '0') {
                ans += min(c0, h + c1);
            } else {
                ans += min(c1, h + c0);
            }
        }

        cout << ans << endl;
    }

    return 0;
}