#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n, a;
    cin>>n>>a;
    vector<int> children(n);
    for(int i=0; i<n; i++) cin>>children[i];

    long long ans = 0;
    int max = 0;
    bool check = true;
    for(int i=0; i<n; i++){
        if(children[i]>a) check = false;
        if(children[i]>=max){
            max = children[i];
            ans = i;
        }
    }
    if(check) cout<<n;
    else cout<<ans+1;

    return 0;
}