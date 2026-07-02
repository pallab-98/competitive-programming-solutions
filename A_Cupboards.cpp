#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;

    int left0 = 0, left1 = 0;
    int right0 = 0, right1 = 0;

    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;

        if (l == 0)
            left0++;
        else
            left1++;

        if (r == 0)
            right0++;
        else
            right1++;
    }

    cout << min(left0, left1) + min(right0, right1) << endl;

    return 0;
}