#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, a, b;
        cin>>n>>a>>b;
        if(n==1) cout<<a<<endl;
        else if(2*a<b) cout<<n*a<<endl;
    }

    return 0;
}