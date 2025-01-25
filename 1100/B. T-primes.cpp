#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        int count = 0;
        for(int i=1; i<=x; i++){
        if(x%i==0) count++;
    }
    if(count==3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}