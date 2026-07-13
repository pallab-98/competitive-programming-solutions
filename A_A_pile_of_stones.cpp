#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false)
    int n;
    cin >> n;

    string s;
    cin >> s;

    int stones = 0;

    for (char c : s)
    {
        if (c == '+')
        {
            stones++;
        }
        else
        {
            if (stones > 0)
                stones--;
        }
    }

    cout << stones << '\n';

    return 0;
}