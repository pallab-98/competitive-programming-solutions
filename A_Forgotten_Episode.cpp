#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<bool> vis(n + 1, false);

    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        vis[x] = true;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            cout << i << '\n';
            break;
        }
    }

    return 0;
}