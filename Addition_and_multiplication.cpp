#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio
    int caseTest;
    cin >> caseTest;
    while (caseTest--)
    {
        int A, B, S, P;
        cin >> A >> B;

        S = A + B;

        P = A * B;

        cout << S << " " << P << endl;
    }
    return 0;
}