#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector <string> point(n);
        for(int i=0; i<n; i++){
            cin>>point[i];
        }
        int min_row = n;
        int max_row = -1;
        int min_col = m; 
        int max_col = -1;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(point[i][j]=='#'){
                    if(i<min_row) min_row = i; // 0 base index transfer to 1 based e transfer kora jabe na..eita even e thik thakbe but odd number e decimal number asbe
                    if(i>max_row) max_row = i;
                    if(j<min_col) min_col = j;
                    if(j>max_col) max_col = j;
                }
            }
        }
        int x = (min_row+max_row)/2  + 1;    // karon 2 ta row er avg e hobe circle er x position
        int y = (min_col+max_col)/2  + 1;    // karon 2 ta col er avg e hobe circle er y position
        cout<<x<<" "<<y<<endl;
    }

    return 0;
}