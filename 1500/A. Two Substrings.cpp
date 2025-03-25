#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main() {
    fast;
    string s;
    cin >> s;

    int n = s.size();
    vector<int> ab_positions, ba_positions;

    // প্রথমে AB এবং BA এর অবস্থান খুঁজে বের করা
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'A' && s[i + 1] == 'B') {
            ab_positions.push_back(i);
        } 
        if (s[i] == 'B' && s[i + 1] == 'A') {
            ba_positions.push_back(i);
        }
    }

    // এখন চেক করবো কোনো AB এবং BA কি overlap ছাড়া আছে কিনা
    for (int ab : ab_positions) {
        for (int ba : ba_positions) {
            if (abs(ab - ba) > 1) { // overlap না হলে
                cout << "YES\n";
                return 0;
            }
        }
    }

    cout << "NO\n";
    return 0;
}
