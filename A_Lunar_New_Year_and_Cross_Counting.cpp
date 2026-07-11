#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> grid(n);

    for (int i = 0; i < n; i++)
        cin >> grid[i];

    int ans = 0;

    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (grid[i][j] == 'X' &&
                grid[i - 1][j - 1] == 'X' &&
                grid[i - 1][j + 1] == 'X' &&
                grid[i + 1][j - 1] == 'X' &&
                grid[i + 1][j + 1] == 'X')
            {
                ans++;
            }
        }
    }

    cout << ans << "\n";

    return 0;
}