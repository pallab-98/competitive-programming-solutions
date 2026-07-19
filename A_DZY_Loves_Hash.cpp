#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int p, n;
    cin >> p >> n;

    vector<bool> bucket(p, false);

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        int index = x % p;

        if (bucket[index])
        {
            cout << i << '\n';
            return 0;
        }

        bucket[index] = true;
    }

    cout << -1 << endl;

    return 0;
}