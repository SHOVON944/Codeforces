#include<iostream>
using namespace std;

int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    long long multiple_2_number=a*b*c*d;
    multiple_2_number=multiple_2_number%100;
    if(multiple_2_number<10) cout<<"0"<<multiple_2_number;
    else cout<<multiple_2_number;
    return 0;
}


    // long long result =1;
    // result = result *(a%100);
    // result = result *(b%100);
    // result = result *(c%100);
    // result = result *(d%100);
    // result = result%100;
    // cout<<result;