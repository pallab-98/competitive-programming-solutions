#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr)

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        while (m--)
        {
            string temp = s;

            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    int cnt = 0;

                    if (i > 0 && s[i - 1] == '1')
                        cnt++;

                    if (i < n - 1 && s[i + 1] == '1')
                        cnt++;

                    if (cnt == 1)
                        temp[i] = '1';
                }
            }

            if (temp == s)
                break;

            s = temp;
        }

        cout << s << '\n';
    }

    return 0;
}