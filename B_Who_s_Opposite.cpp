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
        int a, b, c;
        cin >> a >> b >> c;

        int half = abs(a - b);
        int total = half * 2;

        if (half == 0 || a > total || b > total || c > total)
        {
            cout << -1 << endl;
            continue;
        }

        if (c + half <= total)
            cout << c + half << endl;
        else
            cout << c - half << endl;
    }

    return 0;
}