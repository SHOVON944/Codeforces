#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string main={"codeforces"};
    while(n--){
        string s;
        cin>>s;
        int count = 0;
        for(int i=0; i<10; i++){
            if(s[i]!=main[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}