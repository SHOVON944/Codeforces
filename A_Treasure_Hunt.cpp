#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--){
        long long x, y, a;
        cin >> x >> y >> a;

        long long all = (x+y);
        long long cycle_count = a/all;
        long long count_count = cycle_count*all;
        long long remaining_digging = count_count + x;
        if(remaining_digging>a) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}
