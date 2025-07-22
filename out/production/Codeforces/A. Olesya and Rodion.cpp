#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin>>n>>t;
    if(n==1  &&  t>9) cout<<"-1"<<endl;
    else{
        if(t!=10){
            cout<<t;
            for(int i=1; i<n; i++){
                cout<<0;
            }
        } else{
            cout<<t;
            for(int i=1; i<n-1; i++){
                cout<<0;
            }
        }
    }

    return 0;
}