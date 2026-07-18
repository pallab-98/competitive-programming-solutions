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
        int n;
        cin >> n;

        vector<int> a(n + 1), b(n + 1), d(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> a[i] >> b[i];

        for (int i = 1; i <= n; i++)
            cin >> d[i];

        long long cur = 0;
        int prevDeparture = 0;

        for (int i = 1; i <= n; i++)
        {
            cur += (a[i] - prevDeparture) + d[i];

            if (i == n)
            {
                cout << cur << '\n';
                break;
            }

            long long stay = (b[i] - a[i] + 1) / 2;
            cur = max(cur + stay, (long long)b[i]);

            prevDeparture = b[i];
        }
    }

    return 0;
}