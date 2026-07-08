#include <bits/stdc++.h>
using namespace std;

bool check(string s, vector<string> a)
{
    vector<string> temp;

    int n = s.size();

    for (int i = 1; i < n; i++)
    {
        temp.push_back(s.substr(0, i));     // prefix
        temp.push_back(s.substr(n - i, i)); // suffix
    }

    sort(temp.begin(), temp.end());
    sort(a.begin(), a.end());

    return temp == a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<string> a;
        string x, y;

        for (int i = 0; i < 2 * n - 2; i++)
        {
            string s;
            cin >> s;
            a.push_back(s);

            if ((int)s.size() == n - 1)
            {
                if (x.empty())
                    x = s;
                else
                    y = s;
            }
        }

        string candidate1 = x + y.back();
        string candidate2 = y + x.back();

        if (check(candidate1, a))
            cout << "YES\n";
        else
            cout << (check(candidate2, a) ? "YES\n" : "NO\n");
    }

    return 0;
}