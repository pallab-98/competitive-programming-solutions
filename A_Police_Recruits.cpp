#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    int police = 0;
    int crime = 0;

    while (caseTest--)
    {
        int x;
        cin >> x;

        if (x == -1)
        {
            if (police > 0)
                police--;
            else
                crime++;
        }
        else
        
            police += x;
        
    }

    cout << crime << endl;

    return 0;
}