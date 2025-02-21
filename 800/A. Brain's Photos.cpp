#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    char pixel;
    bool iscolor = false;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>pixel;
            if(pixel=='C'  ||  pixel=='M'  ||  pixel=='Y'){
                iscolor = true;
                break;
            }
        }
    }
    if(iscolor) cout<<"#Color";
    else cout<<"#Black&White";

    return 0;
}