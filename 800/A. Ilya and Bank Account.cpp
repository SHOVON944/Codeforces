#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin>>x;

    if(x>=0) cout<<x<<endl;
    else{
        x = -x;
        if(x<100  &&  x>9){
            cout<<"0";
            return 0;
        }
        long long mod_last = x%10;
        long long mod_last_before = (x%100)/10;
        if(mod_last>mod_last_before) cout<<"-"<<x/10<<endl;
        if(mod_last<mod_last_before) cout<<"-"<<x/100<<x%10<<endl;
    }
    return 0;
}