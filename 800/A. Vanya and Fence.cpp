#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n>>t;
    int two = 0;
    vector<int>height(n);
    for(int i=0; i<n; i++){
        cin >> height[i];
        if(height[i]>t) two++;
    }
    int ans = (n-two)*1 + two*2;
    cout<<ans<<endl;
    
    return 0;
}