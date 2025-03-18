#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        vector<int>coin(3);
<<<<<<< HEAD
        int sum = 0;
        for(int i=0; i<3; i++){
            cin>>coin[i];
            sum += coin[i];
=======
        for(int i=0; i<3; i++){
            cin>>coin[i];
>>>>>>> aeea3aded762b1c322eb06bc7895b128127bf19d
        }
        int x;
        cin>>x;
        
        sort(coin.begin(), coin.end());
        
<<<<<<< HEAD
        int math =(coin[2]*3) - sum;
        if(x>=math	&&	(x - math)%3==0) cout << "YES" << endl;
=======
        int math = x - ((coin[2]-coin[0]) + (coin[2]-coin[1]));			// direct formula one line e
        if(math%3==0) cout << "YES" << endl;
>>>>>>> aeea3aded762b1c322eb06bc7895b128127bf19d
        else cout << "NO" << endl;
    }
    
    return 0;
}