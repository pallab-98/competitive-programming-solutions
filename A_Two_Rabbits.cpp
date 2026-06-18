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
        long long x, y, a, b;
        cin >> x >> y >> a >> b;

        long long gap = y - x;
        long long speed = a + b;

        if (gap % speed == 0)
            cout << gap / speed << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}