#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--){
        int x;  cin>>x;
        int a = 1;
        int need_sticks = 0;
        for(int i=1; i<=x; ){
            if(a>x) break;
            need_sticks++;
            i++;
            a += i;
        }
        cout<<need_sticks<<endl;
    }


    return 0;
}