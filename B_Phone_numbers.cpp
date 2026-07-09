#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int i = 0;

    while (n - i > 4)
    {
        cout << s[i] << s[i + 1] << "-";
        i += 2;
    }

    if (n - i == 4)
    {
        cout << s[i] << s[i + 1] << "-";
        cout << s[i + 2] << s[i + 3];
    }
    else
    {
        cout << s.substr(i);
    }

    return 0;
}