#include <bits/stdc++.h>
using namespace std;

int main() {
    int len;
    cin >> len;

    string str;
    cin >> str;

    if (n % 2 == 0) {
        for (int i = 0; i < len; i += 2) {
            cout << str[i] << str[i + 1];
            if (i + 2 < len)
                cout << "-";
        }
    } else {
        int i = 0;

        while (i < len - 3) {
            cout << str[i] << s[i + 1] << "-";
            i += 2;
        }

        cout << s.substr(n - 3);
    }

    return 0;
}