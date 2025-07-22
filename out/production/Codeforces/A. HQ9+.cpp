#include<iostream>
using namespace std;

int main()
{
    string word;
    cin>>word;
    bool checker = false;
    for(char c : word){
        if(c=='H'  ||  c=='Q'  ||  c=='9'){
            checker = true;
            break;
        }
    }
    if(checker) cout<<"YES";
    else cout<<"NO";

    return 0;
}