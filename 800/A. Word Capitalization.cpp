#include<iostream>
#include<vector>
#include<string>
#include<cctype>    //for toupper case
using namespace std;
    
int main()
{
    string s;
    cin>>s;
    int i;
    vector<char>word;
    for(i=0; i<s.size(); i++){
        word.push_back(s[i]);
    }
    for(int i=0; i<1; i++){
        word[i]=toupper(word[i]);
        }
    for(i=0; i<s.size(); i++){
        cout<<word[i];
    }
    return 0;
}