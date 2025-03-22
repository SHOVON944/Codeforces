#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        string reversed_s = s;
        reverse(reversed_s.begin(), reversed_s.end());
        
        if (s < reversed_s) {
            cout << "YES" << endl;
            continue;
        }
        
        int swaps = 0;
        for (int i = 0; i < n / 2; ++i) {
            if (s[i] != s[n - 1 - i]) {
                swap(s[i], s[n - 1 - i]);
                swaps++;
                if (swaps > k) {
                    break;
                }
            }
        }
        
        if (s < reversed_s && swaps <= k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}