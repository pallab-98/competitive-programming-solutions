`#include<bits / stdc++.h> using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int caseTest;
    cin >> caseTest;

    while (caseTest--)
    {
        int N, X, Y;
        cin >> N >> X >> Y;

        if (Y % X == 0 && Y / X <= N)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}