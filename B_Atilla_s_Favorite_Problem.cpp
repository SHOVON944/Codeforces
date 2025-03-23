#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--){
        int n;   cin>>n;
        string s;   cin>>s;

        sort(s.begin(), s.end());
        int last_size = s[n-1] - '0' - 48;
        cout<<last_size<<endl;
    }

    return 0;
}