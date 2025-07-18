#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    vector <long long> num(n);
    for(int i=0; i<n; i++) cin>>num[i];

    long long moves = 0;
    for(int i = 1; i < n; i++){
        if(num[i] < num[i-1]){
            moves = moves+num[i-1]-num[i];
            num[i] = num[i-1];
        }
    }
    cout<<moves;

    return 0;
}