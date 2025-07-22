#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    long long ans;
    cin >> n>>m;
    if(n>=63) ans = m;
    else ans = m % (1LL<<n);
    cout << ans << endl;
    
    return 0;
}