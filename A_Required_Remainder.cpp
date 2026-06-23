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
        long long x, y, n;
        cin >> x >> y >> n;

        long long ans = n - ((n - y) % x);

        cout << ans << endl;
    }

    return 0;
}