#include<iostream>
#include<cctype>
#include<unordered_set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        string s;
        cin>>s;
        for(int i=0; i<x; i++){
            s[i]=tolower(s[i]);
        }
        string checker;
        checker = checker + s[0];   // checker+=s[0];
        for(int i=1; i<x; i++){
            if(s[i]!=s[i-1]){
                checker+=s[i];
            }
        }
        if(checker=="meow") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}