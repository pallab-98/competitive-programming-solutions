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
        long long u, v;
        cin >> u >> v;

        cout << -u * u << " " << v * v << endl;
    }

    return 0;
}