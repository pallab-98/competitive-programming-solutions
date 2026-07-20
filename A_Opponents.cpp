#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr)
    int n, d;
    cin >> n >> d;

    int current = 0;
    int maximum = 0;

    while (d--) {
        string s;
        cin >> s;

        bool absent = false;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                absent = true;
                break;
            }
        }

        if (absent) {
            current++;
            if (current > maximum)
                maximum = current;
        } else {
            current = 0;
        }
    }

    cout << maximum << endl;

    return 0;
}