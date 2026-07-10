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
        int len, k;
        cin >> len >> k;

        for (int i = 0; i < len; i++)
        {
            cout << char('a' + (i % k));
        }

        cout << '\n';
    }

    return 0;
}