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

    int stones = 0;

    for (char c : str)
    {
        if (c == '+')
            stones++;

        else
        {
            if (stones > 0)
                stones--;
        }
    }

    cout << stones << endl;

    return 0;
}