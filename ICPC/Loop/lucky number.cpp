#include<iostream>
using namespace std;

int main()
{
    int a,b,mod;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        mod = i%10;
        if(mod==4  && mod==7){
            cout<<i<<" ";
        } else{
            cout<<-1;
        }
    }
    return 0;
}