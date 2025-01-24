#include<iostream>
using namespace std;

int main()
{
    int n,m,a;
    cin>>n>>m>>a;
    long long length = (n+a-1)/a;
    long long width = (m+a-1)/a;
    long long num_flagstones = length*width;
    cout<<num_flagstones;
    return 0;
}