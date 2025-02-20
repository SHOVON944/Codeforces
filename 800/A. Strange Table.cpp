#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long n, m, x;
    while(t--){
        cin>>n>>m>>x;
        long long row = (x-1) % n +1;
        long long col = (x-1) / n +1;
        long long update_x = (row-1) * m + col;
        cout<<update_x<<endl;
    }

    return 0;
}