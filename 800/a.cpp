#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int found = -1;
        for (int y = 1; y < x; ++y) {
            int z = x ^ y;
            if (z < x && y + x > z && x + z > y && y + z > x) {
                found = y;
                break;
            }
        }
        cout << found << "\n";
    }
    return 0;
}