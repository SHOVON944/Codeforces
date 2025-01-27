#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int lower=0;
    int upper=0;
    for(int i=0; i<s.size(); i++){
        if(islower(s[i])) lower++;
        if(isupper(s[i])) upper++;
    }
    for (int i=0; i<s.size(); i++) {
        if (lower>=upper) {
            s[i]=tolower(s[i]); 
        } else{
            s[i]=toupper(s[i]); 
        }
    }
    for(char c:s){
        cout<<c;
    }
    return 0;
}