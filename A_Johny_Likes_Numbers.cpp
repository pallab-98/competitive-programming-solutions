#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    long long n, k;
    cin >> n >> k;

    cout << (n / k + 1) * k << '\n';

    return 0;
}