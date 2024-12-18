#include<iostream>
using namespace std;

int main()
{
    int n;
    int a=1;
    cin>>n;
    int b=n-1;
    for(int i=1; i<=n; i++){
        for(int k=1; k<=b; k++){
            cout<<" ";
        }
        for(int j=1; j<=a; j++){
            cout<<"*";
        }
        cout<<endl;
        a+=2;
        b--;
    }
    return 0;
}