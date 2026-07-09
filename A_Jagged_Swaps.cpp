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

        vector<int> a(len);

        for (int i = 0; i < len; i++)
            cin >> a[i];

        if (a[0] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}