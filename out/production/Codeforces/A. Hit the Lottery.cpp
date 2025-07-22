#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long money;
    cin>>money;
    int cash[] = {100,20,10,5,1};
    int notes = 0;

    for(int i=0; i<5; i++){
        notes = notes + (money/cash[i]);
        money %= cash[i];
    }
    cout<<notes<<endl;

    return 0;
}