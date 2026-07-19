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
        int n, m;
        cin >> n >> m;

        string str;
        cin >> str;

        while (m--)
        {
            string temp = str;

            for (int i = 0; i < n; i++)
            {
                if (str[i] == '0')
                {
                    int cnt = 0;

                    if (i > 0 && str[i - 1] == '1')
                        cnt++;

                    if (i < n - 1 && str[i + 1] == '1')
                        cnt++;

                    if (cnt == 1)
                        temp[i] = '1';
                }
            }

            if (temp == str)
                break;

            str = temp;
        }

        cout << str << endl;
    }

    return 0;
}