#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin>>n;
    set <int> num;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x!=0){
            num.insert(x);
        }
    }
    int ans = num.size();
    cout<<ans<<endl;

    return 0;
}