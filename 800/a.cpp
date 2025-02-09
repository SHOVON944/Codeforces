#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arrays(n, vector<int>(m));
    vector<ll> totalSum(n, 0);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arrays[i][j];
        }
        sort(arrays[i].begin(), arrays[i].end()); // Sort each array in increasing order
        for (int j = 0; j < m; j++) {
            totalSum[i] += arrays[i][j];
        }
    }
    
    // Sort arrays based on their total sum in increasing order
    sort(totalSum.begin(), totalSum.end());
    
    ll maxScore = 0, prefixSum = 0;
    for (int i = 0; i < n; i++) {
        prefixSum += totalSum[i];
        maxScore += prefixSum;
    }
    
    cout << maxScore << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
