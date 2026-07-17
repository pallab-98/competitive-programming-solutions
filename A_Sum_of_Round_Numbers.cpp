#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> ans;
        int place = 1;

        while (n > 0)
        {
            int digit = n % 10;

            if (digit != 0)
                ans.push_back(digit * place);

            place *= 10;
            n /= 10;
        }

        cout << ans.size() << endl;
        for (int x : ans)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}