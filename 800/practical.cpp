#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    
    // Check if the first character of b (s[1] if a is first char) equals s[0]
    // or the last character of b (s[n-2] if c is last char) equals s[n-1]
    if (s[0] == s[1] || s[n-2] == s[n-1]) {
        cout << "Yes\n";
        return;
    }
    
    cout << "No\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}