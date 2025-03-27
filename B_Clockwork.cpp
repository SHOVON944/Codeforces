#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<int>clocks(n);
        for(int i=0; i<n; i++)  cin>>clocks[i];

        sort(clocks.begin(), clocks.end());
        if(clocks[0]<3) cout<<"NO"<<endl;
        else if(clocks[0]>2   &&   clocks[1]>2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}