#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=1;
    for(int i=1; i<=n; i++){
        for(int j=a; j<=n; j++){
            cout<<"*";
        }
        a++;
        cout<<endl;
    }
    return 0;
}