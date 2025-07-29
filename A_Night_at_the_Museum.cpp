#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int res = 'a';
    int sum = 0;
    for(char ch : s){
        sum += min((26-abs(ch-res)), abs(ch-res));
        res = ch;
    }
    cout<<sum;

    return 0;
}