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
        vector<int> arra(len);

        for (int i = 0; i < len; i++)
            cin >> arra[i];

        long long ans = 0;
        int mx = 0;

        for (int i = 0; i < len; i++)
        {
            mx = max(mx, arra[i]);

            if (mx > arra[i])
                ans += (mx - arra[i]);
        }
        cout << ans << endl;
    }
    return 0;
}