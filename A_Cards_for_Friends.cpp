#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--){
        int w, h, n;    cin>>w>>h>>n;
        if(n==1 && w%2!=0 &&  h%2!=0){
            cout<<"YES";
            continue;
        }
        for(int i=1; i<=n; i++){
            int big = max(w, h);
            if(w<h) swap(w, h);
            if(w%2==0) w /= 2;
            else if(h%2==0) h /= 2;
        }
        if(w==h && w!=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}