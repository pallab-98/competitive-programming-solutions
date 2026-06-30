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

        char mn = *min_element(s.begin(), s.end());

        int pos = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == mn)
            {
                pos = i;
                break;
            }
        }

        cout << s[pos] << " ";

        for (int i = 0; i < s.size(); i++)
        {
            if (i != pos)
                cout << s[i];
        }
        cout << endl;
    }

    return 0;
}