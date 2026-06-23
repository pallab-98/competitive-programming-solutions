
#include <bits/stdc++.h>
using namespace std;

pair<int, int> solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string s_max = s;
    bool changed = true;
    while (changed)
    {
        changed = false;
        for (int i = 1; i < n - 1; i++)
        {
            if (s_max[i] == '0' && s_max[i - 1] == '1' && s_max[i + 1] == '1')
            {
                s_max[i] = '1';
                changed = true;
            }
        }
    }
    int max_ones = count(s_max.begin(), s_max.end(), '1');

    string s_min = s;
    changed = true;
    while (changed)
    {
        changed = false;
        for (int i = 1; i < n - 1; i++)
        {
            if (s_min[i] == '1' && s_min[i - 1] == '1' && s_min[i + 1] == '1')
            {

                s_min[i] = '0';
                changed = true;
            }
        }
    }
    int min_ones = count(s_min.begin(), s_min.end(), '1');

    return {min_ones, max_ones};
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        pair<int, int> ans = solve();
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}