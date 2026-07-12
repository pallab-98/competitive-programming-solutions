#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false)
    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;

    cout << 2 * h1 + 2 * h2 + 2 * w1 + 4;

    return 0;
}