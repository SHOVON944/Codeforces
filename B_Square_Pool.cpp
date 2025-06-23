#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, s;
        cin>>n>>s;
        int counter = 0;
        for(int i=1; i<=n; i++){
            int dx, dy, x, y;
            cin>>dx>>dy>>x>>y;
            int check_x;
            int check_y;
            if(dx == 1){
                check_x = x;
            } else{
                check_x = s - x;
            }

            if(dy==1){
                check_y = y;
            } else{
                check_y = s-y;
            }

            if(check_x==check_y) counter++;
        }
        cout<<counter<<endl;
    }

    return 0;
}