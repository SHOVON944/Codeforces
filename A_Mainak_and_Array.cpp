#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        vector <int> num(n);
        for(int i=0; i<n; i++) cin>>num[i];

        sort(num.begin(),  num.end());

        int ans = num[n-1] - num[0];
        cout<<ans<<endl;
    }

    return 0;
}