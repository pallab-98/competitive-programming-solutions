#include <bits/stdc++.h>
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int w, h;
    cin >> w >> h;

    int u1, d1;
    cin >> u1 >> d1;

    int u2, d2;
    cin >> u2 >> d2;

    for (int i = h; i >= 1; i--)
    {
        w += i;

        if (i == d1)
            w -= u1;

        if (i == d2)
            w -= u2;

        w = max(0, w);
    }

    cout << w << endl;

    return 0;
}