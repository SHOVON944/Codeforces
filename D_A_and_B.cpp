#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        vector <int> posa;
        for(int i=0; i<n; i++){
            if(s[i] == 'a') posa.push_back(i);
        }
        long long costA = LLONG_MAX; // using AI...r kichu help er jonno
        if(!posa.empty()){
            for(int i=0; i<(int)posa.size(); i++){
                posa[i] -= i;
            }
            int m = posa.size();
            nth_element(posa.begin(), posa.begin() + m/2, posa.end());
            int median = posa[m/2];
            long long cost = 0;
            for(int x : posa) cost += abs(x - median);
            costA = cost;
        }

        vector <int> posb;
        for(int i = 0; i < n; i++){
            if(s[i] == 'b') posb.push_back(i);
        }
        long long costB = LLONG_MAX; // sathe kichu help nisi..ekta output mele na ti
        if(!posb.empty()){
            for(int i = 0; i < (int)posb.size(); i++){
                posb[i] -= i;
            }

            int m = posb.size();
            nth_element(posb.begin(), posb.begin() + m/2, posb.end());
            int median = posb[m/2];
            long long cost = 0;
            for(int x : posb) cost += abs(x - median);
            costB = cost;
        }

        long long ans = min(costA, costB);
        if (ans == LLONG_MAX) ans = 0;
        cout<<ans<<endl;
    }

    return 0;
}
