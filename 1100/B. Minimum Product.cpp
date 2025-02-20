#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long a, b, x, y, n;
    while(t--){
        cin>>a>>b>>x>>y>>n;
        long long a1 = min(n, a-x);
        long long b1 = n - a1;
        long long min_product1 = (a - a1) * (b - b1);


        long long b2 = min(n, b-y);
        long long a2 = n - b2;
        long long min_product2 = (b - b2) * (a - a2);

        cout<<min(min_product1, min_product2)<<endl;
    }

return 0;
}