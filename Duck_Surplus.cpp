#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        long long a[1000005];

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < n - 1; i++) {
            if(a[i] > a[i + 1]) {

                long long x = a[i];
                long long y = a[i + 1];

                a[i] = y;
                a[i + 1] = x + y;
            }
        }

        cout << a[n - 1] << '\n';
    }

    return 0;
}