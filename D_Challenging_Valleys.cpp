#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--){
        int n;   cin>>n;
        vector<int>num(n);
        for(int i=0; i<n; i++)  cin>>num[i];

        bool decrease = true;
        for(int i=1; i<n; i++){
            if(num[i-1]<num[i]  && decrease){
                decrease = true;
            }
        }
    }

    return 0;
}