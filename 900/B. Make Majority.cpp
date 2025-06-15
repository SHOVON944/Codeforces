#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;   cin>>t;
    while(t--){
        int sizeN;   cin>>sizeN;
        string num;   cin>>num;
        if(num[0] == '1'   &&   num[sizeN-1] =='1') cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}