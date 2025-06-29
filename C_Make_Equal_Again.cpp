#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> num(n);
        set <int> check;
        for(int i=0; i<n; i++) cin>>num[i];

        check.insert(num.begin(), num.end());

        if(check.size() == 1){
            cout<<0<<endl;
        } else if(num[0]==num[n-1]){
            cout<<check.size()-1<<endl;
        } else{
            cout<<check.size()<<endl;
        }
    }

    return 0;
}