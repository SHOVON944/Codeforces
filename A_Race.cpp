#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a, x, y;
        cin>>a>>x>>y;

        if((a>x  &&  a<y)   ||   (a>y  &&  a<x)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}