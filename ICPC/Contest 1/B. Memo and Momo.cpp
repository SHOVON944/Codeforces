#include<iostream>
using namespace std;

int main()
{
    long long memo,momo,divider;
    cin>>memo>>momo>>divider;
    
    if(memo%divider==0  &&  momo%divider==0){
        cout<<"Both";
    }
    if(memo%divider==0  &&  momo%divider!=0){
        cout<<"Memo";
    }
    if(memo%divider!=0  &&  momo%divider==0){
        cout<<"Momo";
    }
    if(memo%divider!=0  &&  momo%divider!=0){
        cout<<"No One";
    }
    return 0;
}