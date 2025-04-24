#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int total_houses = r - l + 1;
        if (total_houses != n + 1) {
            cout << "0 0" << endl;
            continue;
        }
        
        int remaining_days = n - m;
        int l_prime, r_prime;
        l_prime = l;
        r_prime = l + m;
        if (r_prime > r) {
            r_prime = r;
            l_prime = r - m;
        }
        
        cout << l_prime << " " << r_prime << endl;
    }
    return 0;
}