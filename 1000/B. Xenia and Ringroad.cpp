#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    vector <int> task(m);
    for(int i=0; i<m;i++) cin>>task[i];
    int temp = 1;
    long long ans = 0;
    for(int i:task){
        if(i>=temp){
            ans += i - temp;
            temp = i;
        } else{
            ans += n - temp + i;
            temp = i;
        }
    }
    cout<<ans;

    return 0;
}