#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        int cnt[105] = {0};

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
        }

        bool ok = true;

        for (int i = 1; i <= 100; i++)
        {
            if (cnt[i] > cnt[i - 1])
            {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }

    return 0;
}