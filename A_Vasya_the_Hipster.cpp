#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;   cin>>a>>b;
    int diff_socks = min(a, b);
    int same_socks = (max(a, b)-diff_socks)/2 ;
    cout<<diff_socks<<" "<<same_socks<<endl;

    return 0;
}