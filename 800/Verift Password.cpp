#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        string pass;
        cin>>pass;
        bool pass_verify = true;
        for(int i=1; i<size; i++){
            if(pass[i]<pass[i-1]){
                pass_verify = false;
                break;
            }
        }
        if(pass_verify) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    

    return 0;
}