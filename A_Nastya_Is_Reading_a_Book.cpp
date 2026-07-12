#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    int k;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        if (v[i].first <= k && k <= v[i].second)
        {
            cout << n - i;
            return 0;
        }
    }
}