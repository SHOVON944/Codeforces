#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;   cin >> t;
    while(t--){
        int n;  cin>>n;
        string GB1, GB2;    cin>>GB1>>GB2;

        for(int i=0; i<n; i++){
            if(GB1[i]=='G') GB1[i] = 'B';
            if(GB2[i]=='G') GB2[i] = 'B';
        }

        if(GB1 == GB2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}