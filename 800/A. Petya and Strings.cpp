#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string first,second;
    cin>>first>>second;
    int sum1 = 0;
    int sum2 = 0;
    for(char &ch : first){
        ch = tolower(ch);
    }
    for(char &ch : second){
        ch = tolower(ch);
    }

    for(int sum_digit : first){
        sum1 = sum1 + sum_digit;
    }
    for(int sum_digit : second){
        sum2 = sum2 + sum_digit;
    }
    if(sum1>sum2) cout<<"1";
    else if(sum1<sum2) cout<<"-1";
    else cout<<"0";

    return 0;
}