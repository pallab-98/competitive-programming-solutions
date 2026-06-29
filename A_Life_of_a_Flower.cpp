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
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int height = 1;
        bool dead = false;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                if (i > 0 && a[i - 1] == 1)
                    height += 5;
                else
                    height += 1;
            }

            if (i > 0 && a[i] == 0 && a[i - 1] == 0)
            {
                dead = true;
                break;
            }
        }

        if (dead)
            cout << -1 << endl;
        else
            cout << height << '\n';
    }
    return 0;
}
