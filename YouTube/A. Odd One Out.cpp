#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        long long a,b,c;
        cin>>a>>b>>c;
        if(a==b) cout<<c<<endl;
        if(a==c) cout<<b<<endl;
        if(b==c) cout<<a<<endl;
    }
}