#include<iostream>
using namespace std;

int main()
{
    long long x,y;
    char op;
    cin>>x>>op>>y;
    switch(op){
        case '+': cout<<x+y<<endl;
        break;
        case '-': cout<<x-y<<endl;
        break;
        case '*': cout<<x*y<<endl;
        break;
        case '/': if(y!=0){
            cout<<x/y<<endl;
        } else{
            cout<<"Not Disible"<<endl;
        }
        break;
        default : cout<<"Error";
    }
    return 0;
}