#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int sum = a + b + c + d;

        if (sum == 0)
            cout << 0 << endl;
        else if (sum == 4)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}