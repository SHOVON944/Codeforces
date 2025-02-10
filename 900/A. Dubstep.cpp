#include<bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    cin>>word;
    for(char ch : word){
        if(ch != 'W'  ||  ch != 'U'  ||  ch != 'B'){
            cout<<ch;
        }
    }
    return 0;
}