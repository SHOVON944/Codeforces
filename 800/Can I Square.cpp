#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        long long sum_square =0;
        cin >> n;
        for(int i=1; i<=n; i++){
        int x;
            cin >> x;
            sum_square += x;
        }
        double check = sqrt(sum_square);
        
        if(floor(check) == check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}