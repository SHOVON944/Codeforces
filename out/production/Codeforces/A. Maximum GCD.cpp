#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        long long x;
        cin>>x;
        long long GCD = x/2;
        cout<<GCD<<endl;
    }
    return 0;
}