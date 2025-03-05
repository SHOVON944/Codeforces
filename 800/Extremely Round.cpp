#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int size = s.size();
        int convertTo_int;
        if(size==1){
            convertTo_int = s[0] - '0';                    // 1 to n 
            cout << convertTo_int << endl;
        } else{
            convertTo_int = s[0] - '0';
            int ans = convertTo_int + (9*(size-1));                        // 1-9=9,	10-99=9,	100-999=9 and so on
            cout << ans << endl;
        }
    }

    return 0;
}