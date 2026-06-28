#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest, key = 0;
    cin >> caseTest;
    while (caseTest--)
    {
        int key;
        cin >> key;
        key = key;
        int value, count = 0;
        cin >> value;
        if (value % 2 == 0)
            count++;
    }
    cout << (key == count ? "Yes" : "No") << endl;
    return 0;
}