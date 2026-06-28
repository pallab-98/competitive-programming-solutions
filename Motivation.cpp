#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimizing I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
        
        long long max_rating = 0;
        
        for (int i = 0; i < n; i++) {
            long long s, r;
            cin >> s >> r;
            
            // Check if the movie fits in the hard disk
            if (s <= x) {
                // Keep track of the highest rating seen so far
                if (r > max_rating) {
                    max_rating = r;
                }
            }
        }
        cout << max_rating << "\n";
    }
    return 0;
}