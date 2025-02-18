#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long maximum, minimum, product;
    cin>>t;
    long long a,b,x,y,n;
    while(t--){
        cin>>a>>b>>x>>y>>n;
        if(a>=b){
            if(b-y<=n){
                maximum = n-(b-y);
                minimum = y;
                product = (a-maximum) * minimum;
            } else{
                minimum = b-n;
                maximum = a;
                product = maximum * minimum;
            }
        } else{
            if(a-x<=n){
                maximum = n-(a-x);
                minimum = x;
                product = (b-maximum) * minimum;
            } else{
                minimum = a-n;
                maximum = b;
                product = maximum * minimum;
            }
        }
    cout<<product<<endl;
    }

return 0;
}