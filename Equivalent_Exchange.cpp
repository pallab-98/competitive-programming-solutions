#include <bits/stdc++.h>
using namespace std;

int main()
{
    int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        int N, K;
        cin >> N >> K;

        int prefix = 0;
        int mn = 0, mx = 0;

        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            prefix += x;
            mn = min(mn, prefix);
            mx = max(mx, prefix);
        }

        if (mx - mn <= K)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}