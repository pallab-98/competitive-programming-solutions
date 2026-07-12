#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false)

    int n;
    cin >> n;

    int pos = 0, neg = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x > 0)
            pos++;
        else if (x < 0)
            neg++;
    }

    int need = (n + 1) / 2;

    if (pos >= need)
        cout << 1 << endl;
    else if (neg >= need)
        cout << -1 << endl;
    else
        cout << 0 << endl;

    return 0;
}