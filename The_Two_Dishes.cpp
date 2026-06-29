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
        long long n, s;
        cin >> n >> s;
        if (s <= n)
            cout << s << endl;
        else
            cout << (2 * n - s) << endl;
    }
    return 0;
}