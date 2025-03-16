#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        vector<int>coin(3);
        for(int i=0; i<3; i++){
            cin>>coin[i];
        }
        int x;
        cin>>x;
        
        sort(coin.begin(), coin.end());
        
        int math = x - ((coin[2]-coin[0]) + (coin[2]-coin[1]));			// direct formula one line e
        if(math%3==0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}