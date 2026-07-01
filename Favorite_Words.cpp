#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    cin >> str;

    if (str[0] == 'c' || str[3] == 'f')
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}