#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        int len;
        cin >> len;

        int cnt0 = 0, cnt1 = 0;
        int ans = 0;

        for (int i = 0; i < len; i++)
        {
            int x;
            cin >> x;

            if (x == 0)
                cnt0++;
            else if (x == 1)
                cnt1++;
            else
                ans += x;
        }

        if (cnt0 == 0)
        {

            ans += cnt1;
        }
        else
        {

            ans += 1;
            cnt0--;

            if (cnt0 > 0 && cnt1 > 0)
            {
                ans += 2;
                cnt0--;
                cnt1--;
            }

            ans += cnt1;
        }

        cout << ans << endl;
    }

    return 0;
}