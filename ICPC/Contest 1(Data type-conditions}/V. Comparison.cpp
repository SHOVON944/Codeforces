#include<iostream>
using namespace std;

int main()
{
    int x,y;
    char greater_less;
    cin>>x>>greater_less>>y;
    if(greater_less=='>'){
        if(x>y) cout<<"Right";
        else cout<<"Wrong";
    }
    if(greater_less=='<'){
        if(x<y) cout<<"Right";
        else cout<<"Wrong";
    }
    if(greater_less=='='){
        if(x==y) cout<<"Right";
        else cout<<"Wrong";
    }
    return 0;
}