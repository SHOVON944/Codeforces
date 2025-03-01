#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s1, s2;
        cin>>s1>>s2;
        string combined = s1+s2;
        sort(combined.begin(), combined.end());
        int moves = 0;
        for(int i=0; i<3; i++){
            if(combined[i]!=combined[i+1]){
                moves++;
            }
        }
        cout<<moves<<endl;
    }

    return 0;
}