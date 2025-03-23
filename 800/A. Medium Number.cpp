#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--){
        int mid[3];
        for(int i=0; i<3; i++) cin>>mid[i];

        sort(mid, mid+3);

        cout<<mid[1]<<endl;
    }

    return 0;
}