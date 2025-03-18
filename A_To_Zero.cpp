#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        int operations = 0;
        bool off = false;
        while (n > 0) {
            if (n % 2 == 0) {
                if(k%2==0) n -= k;
                else if(!off){
                    n -= (k-1);
                }
            } else {
                if(k%2==0 && !off){
                    n -= (k-1);
                }
                else if(!off){
                    n -= k;
                    off = true;
                }
            }
            operations++;
        }
        
        cout << operations << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}