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
        int x, y;
        cin >> x >> y;

        int mx = max(x, y);

        if (x == y)
            cout << 2 * mx << endl;
        else
            cout << 2 * mx - 1 << endl;
    }

    return 0;
}
