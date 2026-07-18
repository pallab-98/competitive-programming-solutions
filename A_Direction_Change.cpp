#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int caseTest;
    cin >> t;

    while (t--)
    {
        long long n, m;
        cin >> n >> m;

        if (n == 1 && m == 1)
        {
            cout << 0 << '\n';
            continue;
        }

        if (min(n, m) == 1)
        {
            if (max(n, m) == 2)
                cout << 1 << '\n';
            else
                cout << -1 << '\n';

            continue;
        }

        long long x = min(n, m);
        long long y = max(n, m);

        cout << (2 * x - 2) + 2 * max(0LL, y - x - 1) << '\n';
    }

    return 0;
}