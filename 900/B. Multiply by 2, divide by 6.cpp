#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--){
    int n;  cin>>n;
    int moves = 0;
    while(n>1){
            if(n%6==0){
                n /= 6;
                moves ++;
            } else if(n%3==0){
                n *= 2;
                moves++;
            } else{
                moves = -1;
                break;
            }
        }
        cout<<moves<<endl;
    }

return 0;
}