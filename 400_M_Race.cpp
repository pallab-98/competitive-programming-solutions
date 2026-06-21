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
        int Alice, Bob, Charlie;
        cin >> Alice >> Bob >> Charlie;

        if (Alice < Bob)
        {
            if (Alice < Charlie)
                cout << "ALICE" << endl;
            else
                cout << "CHARLIE" << endl;
        }
        else
        {
            if (Bob < Charlie)
                cout << "BOB" << endl;
            else
                cout << "CHARLIE" << endl;
        }
    }

    return 0;
}