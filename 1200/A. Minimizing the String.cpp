#include<iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    for(int i=0; i<n-1; i++){
        if(s[i]>s[i+1]){
            s.erase(i,1);
            cout<<s<<endl;
            return 0;
        }
    }
    s.pop_back();
    cout<<s<<endl;
    return 0;
}