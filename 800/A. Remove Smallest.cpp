#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> value(n);
        for(int i=0; i<n; i++){
            cin>>value[i];
        }
        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }
        sort(value.begin(), value.end());

        bool greaterOne = false;
        for(int i=1; i<n; i++){
            if(abs(value[i] - value[i-1]) > 1){
                greaterOne = true;
                break;
            }
        }
        if(greaterOne) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;   
}