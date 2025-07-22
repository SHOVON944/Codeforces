#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=0; 
    string s;
    for(int i=0; i<n; ++i){
        cin>>s;
        if(s=="++X" || s=="X++"){
            x++;
        } 
        if(s=="--X" || s=="X--"){
            x--;
        }
    }
    cout<<x;
    return 0;
}