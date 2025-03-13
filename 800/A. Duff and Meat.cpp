#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cost = 0;
    int minimum = INT_MAX;
    for(int i=1; i<=n; i++){
        int ai,pi;
        cin>>ai>>pi;

        minimum = min(minimum, pi);
        cost = cost + (ai*minimum);
    }
    cout<<cost<<endl;

    return 0;
}
