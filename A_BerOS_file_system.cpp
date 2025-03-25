#include<bits/stdc++.h>
using namespace std;

int main()
{
    string file_name;   cin>>file_name;
    vector<char>new_name;

    bool slash_checker = false;
    for(char ch : file_name){
        if(ch == '/'){
            if(!slash_checker){
                new_name.push_back('/');
                slash_checker = true;
            }
        } else{
            new_name.push_back(ch);
            slash_checker = false;
        }
    }
    if(new_name.size()>1   &&   new_name.back() == '/') new_name.pop_back();

    for(char c : new_name){
        cout<<c;
    }

    return 0;
}