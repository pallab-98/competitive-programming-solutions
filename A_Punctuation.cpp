#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string ans;

    for (char c : s)
    {
        if (isalpha(c))
        {
            ans += c;
        }
        else if (c == '.' || c == ',' || c == '!' || c == '?')
        {
            while (!ans.empty() && ans.back() == ' ')
                ans.pop_back();

            ans += c;
            ans += ' ';
        }
        else if (c == ' ')
        {
            if (!ans.empty() &&
                ans.back() != ' ' &&
                ans.back() != '.' &&
                ans.back() != ',' &&
                ans.back() != '!' &&
                ans.back() != '?')
            {
                ans += ' ';
            }
        }
    }

    while (!ans.empty() && ans.back() == ' ')
        ans.pop_back();

    cout << ans << endl;
    return 0;
}