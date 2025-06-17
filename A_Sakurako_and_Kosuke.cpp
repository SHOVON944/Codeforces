#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cordinate = 0;
        for(int i=1; i<=n; i++){
            if(i%2!=0){
                cordinate -= 2*i - 1;
                if(cordinate>n || cordinate<-n) cout<<"Sakurako"<<endl;
            } else{
                cordinate += 2*i - 1;
                if(cordinate>n || cordinate<-n) cout<<"Kosuke"<<endl;
            }
        }
    }

    return 0;
}