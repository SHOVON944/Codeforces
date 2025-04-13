#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Helper function to check if a number is prime
bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (long long i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x;
        int k;
        cin >> x >> k;

        // Build the repeated number y
        string x_str = to_string(x);
        string y_str = "";
        for (int i = 0; i < k; ++i)
            y_str += x_str;

        // Convert y_str to a number
        long long y = stoll(y_str);

        // Check primality
        if (isPrime(y))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
