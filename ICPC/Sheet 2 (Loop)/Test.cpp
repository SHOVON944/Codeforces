#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a;
        cin>>a;
        string s;
        cin>>s;
        int ans = 0;
        for (int i=1; i<a; i++){
            if (s[i]!=s[i-1]){
                ans++;
            }
        }
        if (s[0]=='1'){
            ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}