#include<bits/stdc++.h>
using namespace std;

bool isprime(int z){
    if(z<2) return false;
    for(int i=2; i*i<=z; i++){
        if(z%i==0) return false;
    }
    return true;
}

int main()
{
    int n, m;
    cin>>n>>m;
    int check_prime = n+1;
    while(!isprime(check_prime)) check_prime++;

    if(check_prime==m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}