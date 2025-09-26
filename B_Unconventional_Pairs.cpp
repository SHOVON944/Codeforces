#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        vector <long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        int need = n/2;
        long long lo = 0;
        long long hi = 2000000000LL; // also use AI...
        long long ans = hi;
        while(lo<=hi){
            long long mid = lo + (hi - lo) / 2;
            int formed = 0;
            int i = 0;
            while(i + 1 < n){
                if(a[i+1] - a[i] <= mid){
                    formed++;
                    i += 2;
                } else{
                    i++;
                }
            }
            if(formed >= need){
                ans = mid;
                hi = mid - 1;
            } else{
                lo = mid + 1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
