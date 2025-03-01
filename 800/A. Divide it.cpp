#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int moves =0;
        bool ans = true;
        while(n>1){
            if(n%2==0){
                n /= 2;
                moves++;
            } else if(n%3==0){
                n = (2*n)/3;
                moves++;
            } else if(n%5==0){
                n = (4*n)/5;
                moves++;
            } else{
                ans = false;				// jdi divide na hoi thle if, if else kono condition manbe na sejnno else condition manbe and (-1) print korbe
                break;
            }
        }
        if(!ans) cout << "-1" << endl;
         else cout<<moves<<endl;
    }

    return 0;
}