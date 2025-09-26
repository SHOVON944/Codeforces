#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    if(!(cin >> t)){
        return 0;
    }
    while (t--)
    {
        int n, k;
        cin>>n>>k;
        vector <int> freq(n + 1, 0);
        for (int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if(0 <= x && x <= n)
                freq[x]++;
        }
        int missing = 0;
        for (int i=0; i < k; i++)
        {
            if (freq[i] == 0)
                missing++;
        }
        int cnt_k = freq[k];
        cout<<max(missing, cnt_k)<<endl;
    }
    return 0;
}
