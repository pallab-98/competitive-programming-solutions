#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cou.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (t--) {
        int x, y;
        cin >> x >> y;

        if (x == y)
            cout << "YES\n";
        else if (y > 1 && x % y == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
} 