#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int mishka = 0, chris = 0;

    while (n--)
    {
        int m, c;
        cin >> m >> c;

        if (m > c)
            mishka++;

        else if (m < c)
            chris++;
    }

    if (mishka > chris)
        cout << "Mishka";

    else if (chris > mishka)
        cout << "Chris";

    else
        cout << "Friendship is magic!^^";

    return 0;
}