#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string game;
        cin>>game;
        int zero = count(game.begin(), game.end(), '0');
        int one = count(game.begin(), game.end(), '1');
        int checking = min(zero, one);
        if(checking%2!=0) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;
    }

    return 0;
}