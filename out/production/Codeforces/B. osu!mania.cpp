#include<iostream>
#include<string>
#include<vector>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans(n);
        for(int i=1; i<=n;i++){
            string hash;
            cin>>hash;
            for(int j=0; j<4;j++){
                if(hash[j]=='#'){
                    ans[n-i] = j+1;
                    break ;
                }
            }
            }
            for(int final : ans){
                cout<<final<<" ";
            }
        cout  << endl;
    }
    return 0;
}