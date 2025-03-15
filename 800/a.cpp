#include <iostream>
#include <cmath>
using namespace std;

// Function to compute the minimum value of x after n OPER 1 and m OPER 2
long long computeMin(long long x, long long n, long long m) {
    for (int i = 0; i < n; ++i) {
        x = x / 2;
    }
    for (int i = 0; i < m; ++i) {
        x = (x + 1) / 2;
    }
    return x;
}

// Function to compute the maximum value of x after n OPER 1 and m OPER 2
long long computeMax(long long x, long long n, long long m) {
    for (int i = 0; i < m; ++i) {
        x = (x + 1) / 2;
    }
    for (int i = 0; i < n; ++i) {
        x = x / 2;
    }
    return x;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, n, m;
        cin >> x >> n >> m;
        long long minVal = computeMin(x, n, m);
        long long maxVal = computeMax(x, n, m);
        cout << minVal << " " << maxVal << endl;
    }
    return 0;
}