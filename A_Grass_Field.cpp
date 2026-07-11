#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int sum = a + b + c + d;

        if (sum == 0)
            cout << 0 << "\n";
        else if (sum == 4)
            cout << 2 << "\n";
        else
            cout << 1 << "\n";
    }

    return 0;
}