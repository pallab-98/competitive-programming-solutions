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
        int Redcard, Yellowcard;
        cin >> Redcard >> Yellowcard;
        
        Yellowcard -= Redcard;
        int set = Redcard + Yellowcard / 2;
        cout << set << endl;
    }

    return 0;
}