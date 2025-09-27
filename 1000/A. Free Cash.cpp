#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map <pair<int, int>, int> count;

    int h, m;
    int ans = 0;
    for(int i=0; i<n; i++){
        cin>>h>>m;
        count[{h, m}]++;
        ans = max(ans, count[{h, m}]);
    }
    cout<<ans;

    return 0;
}