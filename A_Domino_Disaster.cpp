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
        cin >> n;

        string s;
        cin >> s;

        for (char &ch : s)
        {
            if (ch == 'U')
                ch = 'D';
            else if (ch == 'D')
                ch = 'U';
        }

        cout << s << endl;
    }

    return 0;
}