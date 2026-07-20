#include <iostream>
using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int len;
    cin >> len;

    for (int i = 1; i <= len; i++) {

        if (i % 2 == 1)
            cout << "I hate";
        else
            cout << "I love";

        if (i == len)
            cout << " it";
        else
            cout << " that ";
    }

    return 0;
}