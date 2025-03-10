#include <bits/stdc++.h>

int main() {

    int t;
    std::cin >> t;

    while (t--) {
        int n, k;
        std::cin >> n >> k;

        std::vector<int> a(n);
        if (k % 2 == 1) {
            for (int i = 0; i < n - 1; ++i) {
                a[i] = i + 2;
            }
            a[n - 1] = n - 1;
        } else {
            for (int i = 0; i < n; ++i) {
                a[i] = i + 1;
            }
            a[n - 1] = n - 1;
        }

        for (int i = 0; i < n; ++i) {
            std::cout << a[i] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}