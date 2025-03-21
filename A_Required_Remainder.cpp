#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;	cin>>t;
    while(t--){
        int x, y, n;	cin>>x>>y>>n;
        int divide = n/x;
        int ans = (divide*x) + (x-y);
        if(ans>n){  
            ans = (divide*x) - (x-y);
        } else if(ans<0){
            ans = 0;
        }
        cout<<ans<<endl;
    }

    return 0;
}