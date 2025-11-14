#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a;
    cin>>n>>a;

    vector<long long> vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];

    long long count = 0;
    for(long long i=0; i<n; i++){
        if(vec[i]>a) break;
        count++;
        if((vec[i]<=a) &&  (i==n-1)){
            cout<<n;
            return 0;
        }
    }
    for(int i=n-1; i>=0; i--){
        if(vec[i]>a){
            cout<<count;
            return 0;
        }
        count++;
    }


    return 0;
}