#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--){
        long long x;   cin>>x;
        long long sum = 0;
        for(int i=1; i<=x; i++){
            int num = i;
            while(num>0){
                int remaining = num%10;
                sum += remaining;
                num /=10;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}