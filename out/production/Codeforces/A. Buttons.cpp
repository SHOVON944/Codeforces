#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        int x = 0;
        if(c%2==0){
            x = c/2;
            if((a+x) >(b+c-x)) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        } else{
            x = (c/2) + 1;
            if((a+x) > (b+c-x)) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
    }

    return 0;
}