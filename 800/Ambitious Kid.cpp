#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin >> n;
        int ambition[n];
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            ambition[i] = abs(x);
        }
        sort(ambition, ambition+n);
        cout << ambition[0] << endl;
    
    return 0;
}