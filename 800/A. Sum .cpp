#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n>0){
        int x,y,z;
        cin>>x>>y>>z;
        if(x==y+z  ||  y==x+z  ||  z==x+y){
            cout<<"YES"<<endl;
        } else{
            cout<<"No"<<endl;
        }
        n--;
    }
    return 0;
}