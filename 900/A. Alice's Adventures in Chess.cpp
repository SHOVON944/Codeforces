#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, x_p,  y_p;
        cin>>n>>x_p>>y_p;
        int x = 0;
        int y = 0;
        string queen;
        cin>>queen;
        int size = queen.size();
        bool get = false;
        int i=0;
        int increase =0;
        while(increase <1000){
            
            if(queen[i]=='N') y++;
            if(queen[i]=='E') x++;
            if(queen[i]=='S') y--;
            if(queen[i]=='W') x--;
            
            if(x==x_p  &&  y==y_p){
                cout<<"YES"<<endl;
                get = true;
                break;
            }
            i = (i+1)%size;
            increase ++;
        }
        if(!get) cout<<"NO"<<endl;
    }

    return 0;
}
