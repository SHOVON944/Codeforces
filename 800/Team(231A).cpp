//
#include<iostream>
using namespace std;

int main()
{
    int n,a,b,c;
    int count = 0;
    cin>>n;
    for(int i=1; i<=n; i++){
    cin>>a>>b>>c;
        if(a+b+c >= 2){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}