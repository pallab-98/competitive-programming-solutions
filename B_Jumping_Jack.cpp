#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long x;
    cin >> x;

    x = abs(x);

    long long sum = 0;
    long long jump = 0;

    while (sum < x || (sum - x) % 2 != 0)
    {
        jump++;
        sum += jump;
    }

    cout << jump << endl;

    return 0;
}

