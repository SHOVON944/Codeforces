#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;

        int a=0,b=0;

        a+=(1<<n);

        for(int i=1;i<=n/2-1;i++){
            a+=(1<<i);
        }

        for(int i=n/2;i<=n-1;i++){
            b+=(1<<i);
        }

        cout<<abs(a-b)<<endl;
    }

    return 0;
}