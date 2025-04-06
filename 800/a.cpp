#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--){
        long long l, r;
        cin >> l >> r;
        cout << (r * (r + 1) / 2) - ((l - 1) * l / 2) << endl;
    }

    return 0;
}
