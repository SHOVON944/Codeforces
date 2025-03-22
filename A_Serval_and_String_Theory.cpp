#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (n == 1) {
            cout << "NO\n";
            continue;
        }
        string r = s;
        reverse(r.begin(), r.end());
        if (s < r) {
            cout << "YES\n";
            continue;
        }
        if (k == 0) {
            cout << "NO\n";
            continue;
        }
        bool p = false;
        for (int i = 0; i < n / 2 && !p; i++) {
            if (s[i] > s[n - i - 1]) {
                if (k >= 1) {
                    swap(s[i], s[n - i - 1]);
                    string r = s;
                    reverse(r.begin(), r.end());
                    if (s < r) {
                        p = true;
                        break;
                    }
                    swap(s[i], s[n - i - 1]);
                }
            } else if (s[i] < s[n - i - 1]) {
                p = true;
                break;
            }
        }
        cout << (p ? "YES" : "NO") << "\n";
    }
    return 0;
}