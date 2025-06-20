#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n, a, b;
        cin>>n>>a>>b;
        if(n==1) cout<<a<<endl;
        else if(2*a<=b) cout<<n*a<<endl;
        else{
            if(n%2==0) cout<<(n*b)/2<<endl;
            else cout<<a + ((n-1)*b)/2<<endl;
        }
    }

    return 0;
}