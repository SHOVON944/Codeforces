#include<iostream>
#include<bitset>
#include<string>
using namespace std;
 
int main()
{
    int n,pi,qi;
    cin>>n;
    int count = 0;
    while(n--){
        cin>>pi>>qi;
        if(qi-pi>=2) count++;
    }
    cout<<count;
 
    return 0;
}