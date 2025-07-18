#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int current_l = 1;
    int max_l = 1;
    for(int i=0; i<s.size()-1; i++){
        if(s[i]==s[i+1]){
            current_l++;
            max_l = max(max_l, current_l);
        } else{
            current_l = 1;
        }
    }
    cout<<max_l;

    return 0;
}