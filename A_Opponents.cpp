#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int len, d;
    cin >> len >> d;

    int current = 0;
    int maximum = 0;

    while (d--) {
        string str;
        cin >> str;

        bool absent = false;

        for (int i = 0; i < len; i++) {
            if (str[i] == '0') {
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