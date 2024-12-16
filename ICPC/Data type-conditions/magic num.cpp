#include<iostream>
using namespace std;

int main()
{
    int x,n1,n2;
    cin>>x;
    n2 = x%10;
    n1 = x/10;
    if(n2%n1==00  ||  n1%n2==0){
    cout<<"YES";
    } else{
    cout<<"NO";
    }
    return 0;    
}