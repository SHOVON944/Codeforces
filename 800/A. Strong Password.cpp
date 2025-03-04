#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<string> pass;
        pass.push_back(s);
        for(int i=0; i<pass.size(); ){
            if(pass[i]==pass[i+1]){
                char nextChar = pass[i]+1;
                pass.insert(pass.begin()+1, nextChar)
                i++;
            }
            i++;
        }
        cout<<pass<<endl;
    }

    return 0;
}