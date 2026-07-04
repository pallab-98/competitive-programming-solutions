#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int police = 0;
    int crime = 0;

    while (n--)
    {
        int x;
        cin >> x;

        if (x == -1)
        {
            if (police > 0)
                police--;
            else
                crime++;
        }
        else
        {
            police += x;
        }
    }

    cout << crime << '\n';

    return 0;
}