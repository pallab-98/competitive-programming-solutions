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
        string s;
        cin >> s;

        bool ok = true;

        for (int i = 0; i < s.size();)
        {
            int j = i;

            while (j < s.size() && s[j] == s[i])
                j++;

            if (j - i == 1)
            {
                ok = false;
                break;
            }

            i = j;
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}