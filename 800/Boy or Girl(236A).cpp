#include<iostream>
using namespace std;
#include <unordered_set>

int main()
{
    string s;
    cin>>s;
    unordered_set<char> distinctChars;
    for (char c : s) {
        distinctChars.insert(c);
    }
    int size = distinctChars.size();
    if(size%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    if(size%2!=0){
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}