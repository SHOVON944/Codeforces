#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int h, m;
        cin>>h>>m;
        if(h==23){
            cout<<60-m<<endl;
        } else if(h==0 && m==0){
            cout<<0<<endl;
        } else{
            int remain_h = (24 - h - 1) * 60;
            cout<<remain_h + 60 - m<<endl;
        }
    }

    return 0;
}