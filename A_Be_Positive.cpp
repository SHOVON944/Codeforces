#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    if(!(cin >> t)){
        return 0;
    }
    while(t--){
        int n;
        cin >> n;
        int zeros = 0;
        int neg = 0;
        for(int i=0; i<n; i++){
            int x;
            cin >>x;
            if(x==0) zeros++;
            else if(x==-1) neg++;
        }
        int ans = zeros + (neg % 2) * 2;
        cout <<ans<< endl;
    }

    return 0;
}
