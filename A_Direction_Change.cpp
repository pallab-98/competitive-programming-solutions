#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long n, m;
        cin >> n >> m;

        if (n == 1 && m == 1)
        {
            cout << 0 << '\n';
        }
        else if (min(n, m) == 1)
        {
            if (max(n, m) == 2)
                cout << 1 << '\n';
            else
                cout << -1 << '\n';
        }
        else
        {
            long long mn = min(n, m);
            long long mx = max(n, m);

            cout << 2 * (mn - 1) + max(0LL, 2 * (mx - mn) - 1) << '\n';
        }
    }

    return 0;
}