#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int num[n];
        int count = 0;
        for(int i=0; i<n; i++){
            cin>>num[i];
            for(int j=0; j<n; j++){
                if((i<j)    &&    (num[j]-num[i]==j-i)) count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}