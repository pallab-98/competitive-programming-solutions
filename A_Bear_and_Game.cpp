#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr)
    int len;
    cin >> len;

    int last = 0;

    for (int i = 0; i < len; i++) {
        int x;
        cin >> x;

        if (x - last > 15) {
            cout << last + 15 << endl;
            return 0;
        }

        last = x;
    }

    if (90 - last >= 15)
        cout << last + 15 << endl;
    else
        cout << 90 << endl;

    return 0;
}