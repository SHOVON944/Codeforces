#include <iostream>
using namespace std;

int main() {
    int n;

    // Input upper limit
    cout << "Enter the value of n: ";
    cin >> n;

    // Outer loop to check each number from 2 to n
    for (int num = 2; num <= n; num++) {
        bool isPrime = true;

        // Inner loop to check if num is divisible by any number from 2 to sqrt(num)
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break; // Exit inner loop if num is not prime
            }
        }

        // Print num if it is prime
        if (isPrime) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
