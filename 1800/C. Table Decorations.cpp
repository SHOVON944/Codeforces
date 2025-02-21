#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long r, g, b;
    cin>>r>>g>>b;

    if(r>g) swap(r,g);
    if(g>b) swap(g,b);
    if(r>g) swap(r,g);

    long long ans = min( (r+g) , (r+g+b)/3 );
    cout<<ans;

    return 0;
}