#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;   cin>>t;
    while(t--){
        string brackets;   cin>>brackets;
        vector< char > brackets_Store;
        int checker = 0;
        for(char ch : brackets){
            if(brackets_Store.empty()){
                brackets_Store.push_back(ch);
                checker++;
            } else if(ch == '('){
                brackets_Store.push_back(ch);
            } else{
                brackets_Store.pop_back();
            }
        }
        if(checker>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}