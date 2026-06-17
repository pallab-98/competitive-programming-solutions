#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int len;
    cin >> len;

    string str;
    cin >> str;

    int one, zero;
    one = zero = 0;

    for (char c : str)
    {
        if (c == 'n')
            one++;
        if (c == 'z')
            zero++;
    }

    for (int i = 0; i < one; i++)
        cout << "1 ";

    for (int i = 0; i < zero; i++)
        cout << "0 ";

    return 0;
}