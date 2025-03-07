#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin>>x;
    if(x>=0){
        cout<<x<<endl;
        return 0;
    }
    long long mod_last = x/10;
    long long mod_last_before = ((x/100)*10) + x%10;
    long long ans = max(mod_last, mod_last_before);
    cout<<ans<<endl;
    return 0;
}