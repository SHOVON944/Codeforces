#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
            cin>>n>>k;
        vector <int> a(n);
            vector <int> total_counts(n + 1, 0);
                for(int i=0; i<n; i++){
             cin>>a[i];
              total_counts[a[i]]++;
            }
                vector <int> target_counts(n + 1, 0);
                 bool possible = true;
                for(int i = 1; i <= n; ++i){
                    if(total_counts[i] > 0 && total_counts[i] % k != 0){
                       possible = false;
                break;
            }

            target_counts[i] = total_counts[i] / k;
        }
            if (!possible) {
            cout << 0 << endl;
                    continue;
        }
    long long ans = 0;
        int l = 0;
        vector<int> window_counts(n + 1, 0);
            for (int r = 0; r < n; ++r) {
            window_counts[a[r]]++;
            while (window_counts[a[r]] > target_counts[a[r]]) {
                  window_counts[a[l]]--;
                l++;
            }
               ans += (r - l + 1);
        }

        cout<<ans<<endl;
    }

    return 0;
}
