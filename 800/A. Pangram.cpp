#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string pangram;
    cin>>pangram;

    set <char> lowercase;
    for(char &ch : pangram){
        char lower = tolower(ch);
        lowercase.insert(lower);
    }
    if(lowercase.size() == 26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}