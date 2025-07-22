#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, max_num;
        cin>>n>>max_num;
        vector <int> num(n);
        for(int i=0; i<n; i++) cin>>num[i];
        long long sum = accumulate(num.begin(), num.end(), 0);
        if(max_num<=sum) cout<<max_num<<endl;
        else cout<<sum<<endl;
    }

    return 0;
}