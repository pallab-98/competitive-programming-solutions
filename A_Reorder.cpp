#include <bits/stdc++.h>
using namespace std;

int main() {
    int caseTest;
    cin >> caseTest;

    while (caseTest--) {
        int n;
        long long m;
        cin >> n >> m;

        long long sum = 0;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            sum += x;
        }

        if (sum == m)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }

    return 0;
}