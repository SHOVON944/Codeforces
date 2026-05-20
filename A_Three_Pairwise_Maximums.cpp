#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;

        vector<int> v = {x,y,z};
        sort(v.begin(),v.end());

        if(v[1] != v[2]){
            cout<<"NO"<<endl;
        } else{
            cout<<"YES"<<endl;
            cout<<v[0]<<" "<<v[0]<<" "<<v[2]<<endl;
        }
    }

    return 0;
}