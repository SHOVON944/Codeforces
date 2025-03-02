#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int k = (n * n + 1) / 2;  // Position of the middle element in the sorted list
    
    int low = 1, high = n * n, mid, count;
    
    while (low < high) {
        mid = (low + high) / 2;
        count = 0;
        
        // Count numbers <= mid in the multiplication table
        for (int i = 1; i <= n; i++) {
            count += min(mid / i, n);
        }
        
        if (count < k)
            low = mid + 1;
        else
            high = mid;
    }
    
    cout << low << endl;
    return 0;
}
