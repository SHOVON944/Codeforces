#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;   cin>>n;

    if(n==1) cout<<"9 8"<<endl;
    if(n%2==0) cout<<n+4<<" 4"<<endl;
    if(n%2!=0) cout<<n+9<<" 9"<<endl;

    return 0;
}