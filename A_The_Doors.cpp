#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(f)
    int n;
    cin >> n;

    vector<int> a(n);

    int left = 0, right = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] == 0)
            left++;
        else
            right++;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            left--;
        else
            right--;

        if (left == 0 || right == 0)
        {
            cout << i + 1 << '\n';
            break;
        }
    }

    return 0;
}