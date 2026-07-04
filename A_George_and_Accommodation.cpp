#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> n;

    int ans = 0;

    while (n--)
    {
        int p, q;
        cin >> p >> q;

        if (q - p >= 2)
            ans++;
    }

    cout << ans << endl;

    return 0;
}