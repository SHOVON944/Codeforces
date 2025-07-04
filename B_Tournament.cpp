#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        int target = a[j - 1]; // strength of player j
        int stronger = 0;

        for (int i = 0; i < n; ++i) {
            if (a[i] > target) stronger++;
        }

        int must_eliminate = n - k;

        if (stronger < must_eliminate) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}