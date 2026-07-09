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
        int n;
        cin >> n;

        int ans = 0;

        while (n--)
        {
            int a, b;
            cin >> a >> b;

            if (a > b)
                ans++;
        }

        cout << ans << endl;
    }

    return 0;
}