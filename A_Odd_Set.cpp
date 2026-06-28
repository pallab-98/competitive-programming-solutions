#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;
    while (caseTest--)
    {
        int loop;
        cin >> loop;
        int even, odd, i;
        even = odd = 0;
        i = 1;
        while (i <= loop * 2)
        {
            int value;
            cin >> value;
            if (value & 1)
                odd++;
            else
                even++;
            i++;
        }
        cout << ((odd == even) ? "Yes" : "No") << endl;
    }
    return 0;
}