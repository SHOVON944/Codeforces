#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    set <char> new_s;
    for(char ch : s){
        if(isalpha(ch)){
            new_s.insert(ch);
        }
    }
    cout<<new_s.size();

    return 0;
}