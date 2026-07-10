#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    
    long long n;
    cin >> n;

    long long sum = n * (n + 1) / 2;

    if (sum % 2 == 0)
        cout << 0 << '\n';
    else
        cout << 1 << '\n';

    return 0;
}

