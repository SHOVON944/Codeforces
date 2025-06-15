#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;   cin>>t;
    while(t--){
        int sizeN;   cin>>sizeN;
        string num;   cin>>num;
        int count_1 = 0;
        int count_0 = 0;
        for(char c : num){
            if(c == '1') count_1++;
            else count_0++;
        }
        if(count_1>count_0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}