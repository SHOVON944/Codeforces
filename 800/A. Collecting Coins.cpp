#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--){
        vector<int>coin(3);
        int sum = 0;
        for(int i=0; i<3; i++){
            cin>>coin[i];
            sum += coin[i];
        }
        int x;
        cin>>x;
        
        sort(coin.begin(), coin.end());
        
        int math =(coin[2]*3) - sum;
        if(x>=math	&&	(x - math)%3==0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}