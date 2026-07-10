#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string door;
    int rail;

    cin >> door >> rail;

    if (door == "front")
    {
        if (rail == 1)
            cout << "L";
        else
            cout << "R";
    }
    else
    {
        if (rail == 1)
            cout << "R";
        else
            cout << "L";
    }

    return 0;
}