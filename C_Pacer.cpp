#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        long long m;
        cin>>n>>m;
        vector <pair<long long,int>> req(n);
        for (int i=0; i<n; i++) cin >> req[i].first >> req[i].second;
        req.insert(req.begin(), {0,0}); // insert er jonno

        long long ans = 0;
        for (int i=0; i<n; i++) {
            long long d = req[i+1].first - req[i].first;
            if(req[i].second == req[i+1].second){ // help nisilam ektu
                ans += d - (d % 2);
            } else{
                ans += d - ((d+1) % 2);
            }
        }
        long long lastDist = m - req[n].first;
        ans += lastDist;

        cout<<ans<<endl;
    }

    return 0;
}
