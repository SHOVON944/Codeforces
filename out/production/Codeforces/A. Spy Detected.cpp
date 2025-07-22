#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<int>num(n);
        set<int>checking;
        for(int i=0; i<n; i++){
            int x;  cin>>x;
            num.push_back(x);
            checking.insert(x);
        }
        sort(num.begin(), num.end());
        if(checking[0] == num[3])
    }
}
