#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        long long k;
        cin >> n >> x >> k;
        string s;
        cin >> s;

        long long count = 0;
        int pos = x;
        long long time = 0;

        while (time < k) {
            if (pos == 0) {
                count++;
                break;
            }

            if (time % n == 0 && time != 0) {
                break;
            }

            char cmd = s[time % n];
            if (cmd == 'L') {
                pos--;
            } else if (cmd == 'R') {
                pos++;
            }

            time++;
        }

        if (pos == 0) {
            count = k / time;
            if (k % time != 0) {
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}
