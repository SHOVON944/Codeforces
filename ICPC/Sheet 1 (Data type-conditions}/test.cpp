#include<iostream>
using namespace std;
 
int main()
{
    long long a,b,c,d,last_2digit;
    cin>>a>>b>>c>>d;
    a=a%10;
    b=b%10;
    c=c%10;
    d=d%10;
    last_2digit =  (a*b*c*d)%100;
    if(last_2digit==0) cout<<"00";
    else cout<<last_2digit;
    return 0;
}