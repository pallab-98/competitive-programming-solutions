#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

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

    cout << ans << endl;

    return 0;
}