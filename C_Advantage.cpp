#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--){
        int n;   cin>>n;
        vector <int> num(n);
        for(int i=0; i<n; i++) cin>>num[i];
        vector <int> store(num);

        sort(num.begin(), num.end());
        int high = num[n-1];
        int hige_minus_1 = num[n-2];
        for(int i: store){
            if(i==high) cout<< high - hige_minus_1<<" ";
            else cout<<i - high<<" ";
        }
        cout<<endl;
    }

    return 0;
}