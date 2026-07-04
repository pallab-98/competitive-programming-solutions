#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int ans = 0;

    while (n--)
    {
        int p, q;
        cin >> p >> q;

        if (q - p >= 2)
            ans++;
    }

    cout << ans << '\n';

    return 0;
}