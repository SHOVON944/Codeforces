#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    long long sum = 0;
    long long counter = 0;
    for(int ch : s){
        int num = ch - '0';
        sum += num;
         if(sum%3==0){
            counter++;
            sum = 0;
        }
    }
    cout<<counter<<endl;

    return 0;
}