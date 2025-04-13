#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        // Length of segment on day m is m + 1
        // Start from leftmost possible position
        int l_prime = l;
        int r_prime = l_prime + m;
        cout << l_prime << " " << r_prime << endl;
    }
    return 0;
}
