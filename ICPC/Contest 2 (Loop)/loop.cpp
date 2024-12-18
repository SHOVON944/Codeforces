#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n>0){
        int x;
        cin>>x;
        while(x>0){
            int mod = x%10;
            cout<<mod<<" ";
            x=x/10;
        }
        cout<<endl;
        n--;
    }
    return 0;
}