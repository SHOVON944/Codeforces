#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;
        int str = 0;
        for(char c : s){
            if(c == '1'){
                str++;
            }
        }
        cout<<str<<endl;
    }
    return 0;
}