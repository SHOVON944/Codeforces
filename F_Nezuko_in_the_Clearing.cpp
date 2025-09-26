#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long h, d;
        cin >> h >> d;

        long long turns = 0;
        long long pos = 0;       // current position
        long long health = h;    // current health

        while (pos < d) {
            long long move_count = 0;
            long long remaining_health = health;

            // try to move as far as possible consecutively
            while (move_count + 1 <= remaining_health && pos + move_count < d) {
                move_count++;
                remaining_health -= move_count;
            }

            if (move_count == 0) {
                // need to rest
                health++;
                turns++;
            } else {
                pos += move_count;
                health = remaining_health;
                turns += move_count;
            }
        }

        cout << turns << "\n";
    }

    return 0;
}
