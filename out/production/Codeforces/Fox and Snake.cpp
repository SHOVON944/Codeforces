#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int change = 1;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            for(int j=1; j<=m; j++){
                cout << "#" ;
            }
            change = -change;
        } else{
            if(change==1){
                for(int k=1; k<=m-1; k++){
                    cout << "." ;
                }
                cout << "#";
            }
            if(change==-1){
                cout<<"#";
                for(int l=1; l<=m-1; l++){
                    cout<<".";
                }
            }
        }
        change = -change;
        cout<<endl;
    }

    return 0;
}