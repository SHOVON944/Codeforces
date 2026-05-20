


/*
███████╗██╗  ██╗ ██████╗ ██╗   ██╗ ██████╗ ███╗   ██╗
██╔════╝██║  ██║██╔═══██╗██║   ██║██╔═══██╗████╗  ██║
███████╗███████║██║   ██║██║   ██║██║   ██║██╔██╗ ██║
╚════██║██╔══██║██║   ██║╚██╗ ██╔╝██║   ██║██║╚██╗██║
███████║██║  ██║╚██████╔╝ ╚████╔╝ ╚██████╔╝██║ ╚████║
╚══════╝╚═╝  ╚═╝ ╚═════╝   ╚═══╝   ╚═════╝ ╚═╝  ╚═══╝
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(m+1);
    for(int i = 0; i <= m; i++){
        cin>>a[i];
    }
    int fedor = a[m];
    int cnt = 0;
    for(int i = 0; i < m; i++){
        int diff = a[i]^fedor;
        if(__builtin_popcount(diff) <= k){
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}