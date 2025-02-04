#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        string s;
        cin>>s;
        int x = 0;
        int y = 0;
        bool passed = false;
        for(char ch : s){
            if(ch == 'R') x++;
            if(ch == 'L') x--;
            if(ch == 'U') y++;
            if(ch == 'D') y--;
            if(x==1  &&  y==1){
                passed = true;
                break;
            }
        }
        if(passed) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}