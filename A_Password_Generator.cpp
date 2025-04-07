#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a, b, c; cin >> a >> b >> c;

        string pass = "";
        for(int i = 0; i < max({a, b, c}); i++) {
            if (c > 0) {
                pass += 'a' + (i % 26);
                c--;
            }
            if (b > 0) {
                pass += 'A' + (i % 26);
                b--;
            }
            if (a > 0) {
                pass += '0' + (i % 10);
                a--;
            }
        }

        // Ensure no two adjacent characters are the same
        for(int i = 1; i < pass.size(); i++) {
            if(pass[i] == pass[i-1]) {
                swap(pass[i], pass[(i+1)%pass.size()]);
            }
        }

        cout << pass << endl;
    }
    return 0;
}
