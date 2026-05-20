#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long mx = 1;
        for(long long i = 1; i*i <= n; i++){
            if(n % i == 0){
                if(i <= k){
                    mx = max(mx,i);
                }
                if((n/i) <= k){
                    mx = max(mx,(n/i));
                }
            }
        }

        cout<<n/mx<<endl;
    }

    return 0;
}