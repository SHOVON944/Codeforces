#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int count = 0;
        int step = 0;
        for(int i=1; i<=3000; i++){
            step++;
            if(i%3!=0  &&  (i%10!=3)) count++;
            if(count == a) break;
        }
        cout<<step<<endl;
    }

    return 0;
}