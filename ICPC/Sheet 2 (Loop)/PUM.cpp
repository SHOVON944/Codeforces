#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=3; j++){
            cout<<a<<" ";
            a++;
        }
        cout<<"PUM"<<endl;;
        a++;
    }
    return 0;
}