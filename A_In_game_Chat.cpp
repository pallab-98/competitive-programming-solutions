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
        string s;

        cin >> n;
        cin >> s;

        int cnt = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == ')')
                cnt++;
            else
                break;
        }

        if (2 * cnt > n)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}