#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char s[100];
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    int count = 0;
    for(int i=1; i<=n; i++){
        if (s[i] == s[i-1]){
            count++;
        }
    }
    cout<<count;
}