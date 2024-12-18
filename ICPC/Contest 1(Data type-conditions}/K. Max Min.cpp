#include<iostream>
using namespace std;

int main()
{
    long long a,b,c,maximum,minimum;
    cin>>a>>b>>c;
    maximum = max(a,max(b,c));
    minimum = min(a,min(b,c));
    cout<<minimum<<" "<<maximum<<endl;
    return 0;
}