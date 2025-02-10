#include<bits/stdc++.h>
using namespace std;

int main()
{
    string capslocks;
    cin>>capslocks;
    for(char &ch : capslocks){
        ch = tolower(ch);
    }
    capslocks[0] = toupper(capslocks[0]);
    for(char &ch : capslocks){
        cout<<ch;
    }
}