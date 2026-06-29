#include <bits/stdc++.h>
using namespace std;
int main()
{
    int caseTest;
    cin >> caseTest;
    while (caseTest--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a >= b && a < c)
            cout << "Take second dose now"<<endl;
        else if (a >= b && a > c)
            cout << "Too Late"<<endl;
        else
            cout << "Too Early"<<endl;
    }

    return 0;
}