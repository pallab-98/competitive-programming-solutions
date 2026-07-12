#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int len;
    cin >> len;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < len; i++)
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