#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> game;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            game.push_back(x);
        }
        sort(game.begin(), game.end());
        int lastCounter = count(game.begin(), game.end(), game[n-1]);

        if(lastCounter%2==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}