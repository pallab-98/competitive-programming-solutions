#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    if (n % 2 != 0)
    {
        cout << -1 << endl;
        return 0;
    }

    for (int i = 1; i <= n; i += 2)
    
        cout << i + 1 << " " << i << " ";
    

    return 0;
}