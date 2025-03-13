#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        while(1){
            if(x%7 == 0){
                cout<<x<<endl;
                break;
            }
            x++;
        }
    }

    return 0;
}