#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int note[n];
        bool check = true;
        for(int i=0; i<n; i++){
            cin>>note[i];
        }

        for(int i=1; i<n; i++){
            if((abs(note[i]-note[i-1]) == 5)  ||  (abs(note[i]-note[i-1]) == 7)){
                check = true;
            }
            else{
                check = false;
                break;
            }
        }
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}