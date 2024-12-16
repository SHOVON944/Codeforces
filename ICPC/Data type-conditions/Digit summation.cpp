#include<iostream>
#include<iomanip>
 
using namespace std;
 
 
int main()
{
    long long N,M;
    cin>>N>>M;
    long long last_N=N%10;
    long long last_M=M%10;
    cout<<last_N+last_M<<endl;
    return 0;
}