#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  n;
    cin>>n;
    if(n==0){
        cout <<"1";
    } else{
        int sequence_checker =n%4;                        // for 8 raised to the power n last digit cycle is 1 ->8, 2 ->4, 3 ->2, 4->6, 5->8 and so on
        if(sequence_checker==1) cout <<"8";
        if(sequence_checker==2) cout <<"4";
        if(sequence_checker==3) cout <<"2";
        if(sequence_checker==0) cout <<"6";    // 4%4==0 hobe...r 8^4 ==4096 -> last digit is 6
    }
    
    return 0;
}