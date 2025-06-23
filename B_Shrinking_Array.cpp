#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        bool beautiful = false;
        for (int i = 0; i < n - 1; ++i) {
            if (abs(a[i] - a[i + 1]) <= 1) {
                beautiful = true;
                break;
            }
        }

        if (beautiful) {
            cout << 0 << endl;
            continue;
        }

        if (n == 2) {
            cout << -1 << endl;
        } else {
            cout << 1 << endl;
        }
    }

    return 0;
}