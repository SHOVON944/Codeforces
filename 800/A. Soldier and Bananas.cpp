#include<iostream>
using namespace std;

int main()
{
    long long price, have_money, banana;
    cin>>price>>have_money>>banana;
    long long need_money = 0;

    for(int i=1; i<=banana; i++){
        need_money = need_money + i*price;
    }
    if(have_money<need_money) cout<<need_money-have_money;
    else cout<<"0";

    return 0;
}