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
        int len;
        cin >> len;

        int cur;

        if (len % 3 == 0 || len % 3 == 2)
            cur = 2;
        else
            cur = 1;

        while (len > 0)
        {
            cout << cur;
            len -= cur;

            if (cur == 1)
                cur = 2;
            else
                cur = 1;
        }

        cout << endl;
        
    }

    return 0;
}