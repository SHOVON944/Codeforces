#include <bits/stdc++.h>
using namespace std;

// for 2 number lcm with gcd
long long lcm_2(long long a, long long b){
    return (a/__gcd(a,b)*b);
}

// for 3 number lcm
long long lcm_3(long long a, long long b, long long c){
    return lcm_2(lcm_2(a,b),c);
}

int main()
{
    int n;                          // n, n-1, n-2
    cin>>n;                         // n, n-1, n-3
                                    // n, n-2, n-3
    if(n==1) cout<<"1";             // n-1, n-2, n-3
    else if(n==2) cout<<"2";
    else{
        long long ans = max(lcm_3(n, n-1, n-2), 
                        max(lcm_3(n, n-1, n-3), 
                        max(lcm_3(n, n-2, n-3), lcm_3(n-1, n-2, n-3))));
        cout<<ans;
    }

    return 0;
}
