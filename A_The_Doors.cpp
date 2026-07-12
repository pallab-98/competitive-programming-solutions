#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int len;
    cin >> len;

    vector<int> a(len);

    int left = 0, right = 0;

    for (int i = 0; i < len; i++)
    {
        cin >> a[i];

        if (a[i] == 0)
            left++;
        else
            right++;
    }

    for (int i = 0; i < len; i++)
    {
        if (a[i] == 0)
            left--;
        else
            right--;

        if (left == 0 || right == 0)
        {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}