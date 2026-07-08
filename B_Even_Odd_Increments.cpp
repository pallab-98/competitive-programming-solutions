#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        int n, q;
        cin >> n >> q;

        long long sum = 0;
        long long even = 0, odd = 0;

        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;

            sum += x;

            if (x % 2 == 0)
                even++;
            else
                odd++;
        }

        while (q--)
        {
            int type;
            long long x;

            cin >> type >> x;

            if (type == 0)
            {
                sum += even * x;

                if (x % 2 == 1)
                {
                    odd += even;
                    even = 0;
                }
            }
            else
            {
                sum += odd * x;

                if (x % 2 == 1)
                {
                    even += odd;
                    odd = 0;
                }
            }

            cout << sum << "\n";
        }
    }

    return 0;
}