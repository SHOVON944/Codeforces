#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <char> paints(n);
        for(int i=0; i<n; i++){
            cin>>paints[i];
        }
        if(n==1){
            if(paints[0]=='B'){
                cout<<"1"<<endl;
                continue;
            }
        }
        if(n==2){
            if(paints[0]=='B'  &&  paints[1]=='B'){
                cout<<"2"<<endl;
                continue;
            } else if(paints[0]=='B'  ||  paints[1]=='B'){
                cout<<"1"<<endl;
                continue;
            } else{
                cout<<"0"<<endl;
                continue;
            }
        }
        int first_point = 0;
        for(int i=0; i<n; i++){
            if(paints[i] == 'B'){
                first_point = i;
                break;
            }
        }
        int  last_point= 0;
        for(int i=n-1; i>=0; i--){
            if(paints[i] == 'B'){
                last_point = i;
                break;
            }
        }
        cout<<(last_point-first_point)+1<<endl;
    }

    return 0;
}