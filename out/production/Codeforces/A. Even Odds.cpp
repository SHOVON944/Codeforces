#include<iostream>
using namespace std;

int main()
{
    long long o_e,check,middle_position;
    cin>>o_e>>check;
    if(o_e%2==0) middle_position = o_e/2;
    else middle_position = (o_e/2)+1;
    if(check<=middle_position) cout<<(check*2)-1;
    else cout<<(check - middle_position) * 2 ;
    return 0;
}