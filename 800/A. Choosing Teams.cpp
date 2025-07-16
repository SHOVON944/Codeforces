#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    vector<int> person(n);
    int count = 0;
    for(int i=0; i<n; i++) {
        cin>>person[i];
        if((5-(person[i]+k))>=0) count++;
    }
    cout<<count/3;

    return 0;
}