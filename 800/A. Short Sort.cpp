#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string abc;
        cin>>abc;
        if((abc[0]=='c'  &&  abc[1]=='a')   ||   (abc[0]=='b'  &&  abc[1]=='c')) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}