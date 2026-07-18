#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        int len;
        cin >> len;

        vector<int> a(len + 1), b(len + 1), d(len + 1);

        for (int i = 1; i <= len; i++)
            cin >> a[i] >> b[i];

        for (int i = 1; i <= len; i++)
            cin >> d[i];

        long long cur = 0;
        int prevDeparture = 0;

        for (int i = 1; i <= len; i++)
        {
            cur += (a[i] - prevDeparture) + d[i];

            if (i == len)
            {
                cout << cur << endl;
                break;
            }

            long long stay = (b[i] - a[i] + 1) / 2;
            cur = max(cur + stay, (long long)b[i]);

            prevDeparture = b[i];
        }
    }

    return 0;
}