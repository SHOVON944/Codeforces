#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int num[n];
        for(int i=0; i<n; i++){
            cin>>num[i];
        }
        sort(num, num+n);
        num[0] = num[0] + 1;
        long long multiple = 1;
        for(int i=0; i<n; i++){
            multiple *= num[i];
        }
        cout<<multiple<<endl;
    }

    return 0;
}