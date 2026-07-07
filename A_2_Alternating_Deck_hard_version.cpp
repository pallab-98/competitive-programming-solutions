#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long aw = 1, ab = 0;
        long long bw = 0, bb = 0;

        long long left = n - 1;
        long long take = 2;
        bool aliceTurn = false;

        while (left > 0)
        {
            long long cur = min(left, take);

            if (aliceTurn)
            {
                long long white = (cur + 1) / 2;
                long long black = cur / 2;

                aw += white;
                ab += black;
            }
            else
            {
                long long white = cur / 2;
                long long black = (cur + 1) / 2;

                bw += white;
                bb += black;
            }

            left -= cur;
            take += 2;
            aliceTurn = !aliceTurn;
        }

        cout << aw << " " << ab << " " << bw << " " << bb << "\n";
    }

    return 0;
}