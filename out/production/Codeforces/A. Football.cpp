#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string> football;
    set<string>checking;
    string s;
    for(int i=0; i<n; i++){
        cin>>s;
        football.push_back(s);
        checking.insert(s);
    }
    if(checking.size()==1){
        cout << *checking.begin() << endl;
        return 0;
    } else{
    sort(football.begin(), football.end());
        int oneside = count(football.begin(), football.end(), football[0]);
        int other = count(football.begin(), football.end(), football[n-1]);
        if(oneside>other) cout << football[0] << endl;
        else cout << football[n-1] << endl;
    }
    
    return 0;
}