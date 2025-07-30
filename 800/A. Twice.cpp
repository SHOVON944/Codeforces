#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>num(n);
        int freq[21] = {0};

        for(int i=0; i<n; i++){
            cin>>num[i];
            freq[num[i]]++;
        }
        int ans = 0;
        for(int i=1; i<=n; i++) ans += freq[i]/2;

        cout<<ans<<endl;
    }

    return 0;
}