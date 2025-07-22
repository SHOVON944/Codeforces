#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    string word;
    cin>>word;
    for(char &c : word){
        c = tolower(c);
    }
    for(char c : word){
        if(c != 'a'  &&  c != 'e'  &&  c != 'i'  &&  c != 'o'  &&  c != 'u'  &&  c != 'y'){
                cout<<"."<<c;
        }
    }
    return 0;
}