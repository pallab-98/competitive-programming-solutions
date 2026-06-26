#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--) {
        string b;
        cin >> b;

        string ans = "";
        ans += b[0];
        ans += b[1];

        for (int i = 3; i < b.size(); i += 2) 
            ans += b[i];
    
        cout << ans << endl;
    }

    return 0;
}