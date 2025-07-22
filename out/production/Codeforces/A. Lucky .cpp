#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int number;
    while(n--){
        cin>>number;
        int last3 = number%1000;
        int first3 = number - last3;
        int sum_last3 = 0;
        int sum_first3 = 0;
        while(last3>0){
            int mod_last3 = last3%10;
            sum_last3 += mod_last3;
            sum_last3 /=10;
        }
        while(first3>0){
            int mod_first3 = first3%10;
            sum_first3 += mod_first3;
            sum_first3 /=10;
        }
        if(sum_first3==sum_last3) cout<<"YES";
        else cout<<"NO";
        
    }
}