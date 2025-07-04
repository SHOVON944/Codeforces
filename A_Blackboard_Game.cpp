#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        // k জন শেষ পর্যন্ত বাঁচবে
        // যদি a[j-1] শেষ পর্যন্ত থাকা k জনের মধ্যে সবচেয়ে বড় k টার মধ্যে থাকে, তাহলে সে বাঁচতে পারবে
        vector<int> b = a;
        sort(b.rbegin(), b.rend()); // descending sort

        int min_needed_strength = b[k - 1]; // শেষ পর্যন্ত বেঁচে থাকা k তম সবচেয়ে বড় শক্তি

        if (a[j - 1] >= min_needed_strength) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
