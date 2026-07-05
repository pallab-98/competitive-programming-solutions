#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    bool bulb[105] = {false};

    for (int i = 0; i < n; i++)
    {
        int caseTest;
        cin >> caseTest;

        while (caseTest--)
        {
            int y;
            cin >> y;
            bulb[y] = true;
        }
    }

    for (int i = 1; i <= m; i++)
    {
        if (!bulb[i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
}