#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int maxPos = 0;
    int minPos = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[maxPos])
            maxPos = i;

        if (a[i] <= a[minPos])
            minPos = i;
    }

    int ans = maxPos + (n - 1 - minPos);

    if (maxPos > minPos)
        ans--;

    cout << ans << endl;

    return 0;
}