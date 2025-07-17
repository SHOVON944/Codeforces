#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<string> grid(n);
        for(int i=0; i<n; i++ ) cin>>grid[i];
        int one = 0;
        int zero = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                char check1 = ((i+j)%2==0) ? '1' : '0';
                char check0 = ((i+j)%2==0) ? '0' : '1';
                if(grid[i][j] != check1) one++;
                if(grid[i][j] != check0) zero++;
            }
        }
        cout<<min(one, zero)<<endl;
    }

    return 0;
}