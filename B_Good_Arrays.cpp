#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    // যদি মাত্র একটি উপাদান থাকে, তাহলে এটি পরিবর্তন করা সম্ভব নয়
    if (n == 1) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
