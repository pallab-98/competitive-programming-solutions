#include <iostream>
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
        int x, y;
        cin >> x >> y;

        if (x == y)
            cout << "YES" << endl;
        else if (y > 1 && x % y == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}