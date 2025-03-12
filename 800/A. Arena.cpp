#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int war[n];
        for(int i=0; i<n; i++){
            cin >>war[i];
        }
        sort(war, war+n);
        if(war[0]==war[1]) cout << n-2 << endl;
        else cout << n-1 << endl;
    }
    
    return 0;
}