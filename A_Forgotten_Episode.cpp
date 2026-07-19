#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie

    int n;
    cin >> n;

    int total = n * (n + 1) / 2;
    int sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }

    cout << total - sum << '\n';

    return 0;
}