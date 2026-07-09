#include <bits/stdc++.h>
using namespace std;

int main() {
    int len;
    cin >> len;

    string str;
    cin >> s;

    if (n % 2 == 0) {
        for (int i = 0; i < n; i += 2) {
            cout << s[i] << s[i + 1];
            if (i + 2 < n)
                cout << "-";
        }
    } else {
        int i = 0;

        while (i < n - 3) {
            cout << s[i] << s[i + 1] << "-";
            i += 2;
        }

        cout << s.substr(n - 3);
    }

    return 0;
}