#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string pi = "314159265358979323846264338327";

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == pi[i])
                cnt++;
            else
                break;
        }

        cout << cnt << '\n';
    }

    return 0;
}