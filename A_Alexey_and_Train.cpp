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

        vector<int> a(n + 1), b(n + 1), tm(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> a[i] >> b[i];

        for (int i = 1; i <= n; i++)
            cin >> tm[i];

        int cur = 0;

        for (int i = 1; i <= n; i++)
        {
            
            cur += tm[i];

            
            if (cur < a[i])
                cur = a[i];

            
            if (i == n)
            {
                cout << cur << '\n';
                break;
            }

            
            int stay = (b[i] - a[i] + 1) / 2;
            cur += stay;

            cur = max(cur, b[i]);
        }
    }

    return 0;
}