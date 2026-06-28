#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;
    while (caseTest--)
    {
        int n;
        long long x;
        cin >> n >> x;

        long long max_rating = 0;

        for (int i = 0; i < n; i++)
        {
            long long s, r;
            cin >> s >> r;
            if (s <= x)
            {
                if (r > max_rating)
                    max_rating = r;
            }
        }
        cout << max_rating << "\n";
    }
    return 0;
}