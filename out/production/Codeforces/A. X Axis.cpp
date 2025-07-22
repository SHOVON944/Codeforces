#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;                // main character hcce x1,x2,x3 er vitore a k kothai bosale a theke oi x1,x2,x3 er durotter jogfol minimum hobe...
    cin >> t;
    while(t--){
        int axis[3];
        cin>>axis[0]>>axis[1]>>axis[2];
        sort(axis, axis+3);
        cout << axis[2] - axis[0] << endl;
    }
    
    return 0;
}