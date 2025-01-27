#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long a,b,c,store1,store2,store3,store4,store5,mainstore;
    cin>>a>>b>>c;
    store1 = a+b*c;
    store2 = a*(b+c);
    store3 = a*b*c;
    store4 = (a+b)*c;
    store5 = a+b+c;
    mainstore = max(store1,max(store2,max(store3,max(store4,store5))));
    cout<<mainstore<<endl;
    return 0;
}