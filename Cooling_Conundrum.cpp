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
        int st, end;
        cin >> st >> end;

        int ans = 0;

        while (st > end)
        {
            ans+=(int)ceil(st/10.0);
            // ans+=(int)ceil((double)st/10);
            // ans += (st + 9) / 10;
            st--;
        }

        cout << ans << endl;
    }

    return 0;
}