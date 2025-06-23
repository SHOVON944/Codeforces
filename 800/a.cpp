#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t; 
    while (t--) {
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
        bool done = false;
        if (l1 == l2 && l2 == l3) {
            if (b1 + b2 + b3 == l1) {
                done = true;
            }
        }

        if (b1 == b2 && b2 == b3) {
            if (l1 + l2 + l3 == b1) {
                done = true;
            }
        }

        cout << (done ? "YES" : "NO") << endl;
    }

    return 0;
}
