#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> t;

    while (t--)
    {
        vector<long long> b(7);

        for (int i = 0; i < 7; i++)
            cin >> b[i];

        long long a = b[0];
        long long x = b[1];
        long long c;

        if (b[2] == a + x)
            c = b[6] - a - x;
        else
            c = b[2];

        cout << a << " " << x << " " << c << "\n";
    }

    return 0;
}