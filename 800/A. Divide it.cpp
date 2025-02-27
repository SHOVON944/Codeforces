#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int moves =0;
        while(n>1){
            if((n%2==0)  ||  (n%3==0)  ||  (n%5==0)){           // for not divided number
                cout<<"-1"<<endl;
                return 0;
            }
            if(n%2==0){
                n /= 2;
                moves++;
            } else if(n%3==0){
                n = (2*n)/3;
                moves++;
            } else if(n%5==0){
                n = (4*n)/5;
                moves++;
            }
        }
        cout<<moves<<endl;
    }

    return 0;
}