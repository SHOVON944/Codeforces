#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        string s;   cin>>s;

        int equal = 0;
        int moves = 0;
        for(char ch : s){
            if(ch == '('){
                equal++;
            } else{
                if(equal>0){
                    equal--;
                } else{
                    moves++;
                }
            }
        }
        cout<<moves<<endl;
    }

    return 0;
}