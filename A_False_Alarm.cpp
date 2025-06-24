#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> doors(n);
        for(int i = 0; i < n; ++i) {
            cin >> doors[i];
        }
        bool possible = false;

        for(int i = 0; i < n; ++i) {
            if(doors[i] == 1) {
                int remaining = n - i;
                if(remaining <= x) {
                    possible = true;
                    break;
                }
            }
        }

        if(possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
