#include <iostream>
#include <vector>
#include <numeric>

void solve() {
    int n;
    long long k;
    std::cin >> n >> k;
    std::vector<int> a(n);
    std::vector<int> total_counts(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        total_counts[a[i]]++;
    }

    std::vector<int> target_counts(n + 1, 0);
    bool possible = true;
    for (int i = 1; i <= n; ++i) {
        if (total_counts[i] > 0 && total_counts[i] % k != 0) {
            possible = false;
            break;
        }
        target_counts[i] = total_counts[i] / k;
    }

    if (!possible) {
        std::cout << 0 << std::endl;
        return;
    }

    long long ans = 0;
    int l = 0;
    std::vector<int> window_counts(n + 1, 0);
    for (int r = 0; r < n; ++r) {
        window_counts[a[r]]++;
        while (window_counts[a[r]] > target_counts[a[r]]) {
            window_counts[a[l]]--;
            l++;
        }
        ans += (r - l + 1);
    }

    std::cout << ans << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
