#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int diff = abs(a[i] - b[i]);
        ans += min(diff, 10 - diff);
    }

    cout << ans << '\n';

    return 0;
}