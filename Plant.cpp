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
        vector<int> ara(len);

        for (int i = 0; i < len; i++)
            cin >> ara[i];
            
        int ans = 0;
        for (int i = 0; i < len - 1; i++)
        {
            int mn;

            if (ara[i] < ara[i + 1])
                mn = ara[i];
            else
                mn = ara[i + 1];

            if (mn > ans)
                ans = mn;
        }

        cout << ans << endl;
    }
}
