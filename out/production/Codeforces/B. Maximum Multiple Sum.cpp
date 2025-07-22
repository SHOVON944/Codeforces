#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int times = 0;
        int check_max = 0;
        for(int x=2; x<=n; x++){
            int sum = 0;
            for(int k=1; x*k<=n; k++){
                  sum = sum + x*k;
            }
            if(sum>check_max){
                check_max = sum;
                times = x;
            }
        }
        cout<<times<<endl;
    }
}