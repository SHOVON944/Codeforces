#include<iostream>
using namespace std;

unsigned long long factcall(long x){
    long long fact =1;
    for(int i=1; i<=x; i++){
        fact = fact*i;
    }
    return fact;
}

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        long long x;
        cin>>x;
        cout<<factcall(x)<<endl;
    }
    return 0;
}