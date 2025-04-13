#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long x;
        int k;
        cin>>x>>k;
        string x_checker = to_string(x);
        string y_checker = "";
        for(int i=0; i<k; i++){
            y_checker = y_checker + x_checker;

        if(y_checker.length()>19  | (y_checker.length() == 19 && y_checker > "9223372036854775807")) {
            cout << "NO" << endl;
            continue;
        }

        long long y;
        try {
            y = stoll(y_str);
        } catch (const out_of_range& e) {
            cout << "NO" << endl;
            continue;
        }

        bool prime = true;
        if (y <= 1) prime = false;
        else if (y == 2) prime = true;
        else if (y % 2 == 0) prime = false;
        else {
            for (long long i = 3; i * i <= y; i += 2) {
                if (y % i == 0) {
                    prime = false;
                    break;
                }
            }
        }
        if (prime) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
