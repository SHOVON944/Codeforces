#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    long long n,t;
    cin >> n>>t;
        while(t>0){
        long long  mod = n%10;
            if(mod!=0) n = n -1;
            if(mod==0) n = n /10;
            t--;
        }
    cout<<n ;
}