#include<bits/stdc++.h>
using namespace std;

int main()
{
    int result[200007];
        result[0] = 0;
        for(int i=1; i<200007; i++){
            int num = i;
            long long sum = 0;
            while(num>0){
                int remaining = num%10;
                sum += remaining;
                num /=10;
            }
            result[i] = result[i-1] + sum;
        }
        
    int t;  cin>>t;
    while(t--){
        long long x;   cin>>x;
        cout<<result[x]<<endl;
    }

    return 0;
}