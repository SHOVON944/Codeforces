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
        for(int i=0; i<n; i++){
            cin>>num[i];
        }
        long long sum = -1;
        vector<int>even_store;
        for(int i : num){
            if(i%2==0){
                even_store.push_back(i);
            } else if(i>sum){
                sum = i;
            }
        }

        sort(even_store.begin(), even_store.end());
        if(sum == -1  ||  even_store.empty()){
            cout<<"0"<<endl;
            continue;
        }

        int ans = even_store.size();
        for(int final : even_store){
            if(final<sum){
                sum = sum + final;
            } else{
                ans++;
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}