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
        int counter  = count(war, war+n, war[0]);
        cout << n-counter << endl;
    }
    
    return 0;
}