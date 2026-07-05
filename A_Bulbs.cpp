#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio
    int n, m;
    cin >> n >> m;

    bool bulb[105] = {false};

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        while (x--)
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
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
}