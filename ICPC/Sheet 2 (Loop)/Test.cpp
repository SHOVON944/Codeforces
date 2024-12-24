#include <iostream>
#include <algorithm> // for std::min and std::max
using namespace std;

int main() {
    int N, M;

    while (true) {
        // Read two integers N and M
        cin >> N >> M;

        // Check termination condition
        if (N <= 0 || M <= 0) {
            break;
        }

        // Ensure N is the smaller and M is the larger number
        int start = min(N, M);
        int end = max(N, M);

        int sum = 0;
        // Print numbers and calculate their sum
        for (int i = start; i <= end; ++i) {
            cout << i << " ";
            sum += i;
        }

        // Print the sum
        cout << "sum =" << sum << endl;
    }

    return 0;
}
