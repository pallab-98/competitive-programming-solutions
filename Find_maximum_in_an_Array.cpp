#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, less<int>());
        int hight = arr[0];
        for (int value : arr)
        {
            if (hight < value)
            {
                hight = value;
            }
        }
        cout << hight << endl;
    }
    return 0;
}