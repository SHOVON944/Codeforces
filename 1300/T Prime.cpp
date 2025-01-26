#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    vector<long long> prime(1000001, 0);

    prime[1] = 1;
    for (long long i = 2; i * i <= 1000000; i++) {
        if (prime[i] == 0) {
            for (long long j = i * i; j <= 1000000; j += i) {
                prime[j] = 1;
            }
        }
    }
    
    int n;
    cin >> n;
    while (n--) {
        long long x;
        cin >> x;
        long long root = sqrt(x);
        if (root * root == x && prime[root] == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}