#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n>0){
        long long x;
        cin>>x;
        if(x==0){
            cout<<0<<" ";
        } else{
            while(x>0){
                int mod = x%10;
                cout<<mod<<" ";
                x=x/10;
            }
        }
        cout<<endl;
        n--;
    }
    return 0;
}