#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int count = 0;
    while(t--){
        string magnet;
        cin>>magnet;
        for(int i=0; i<t; i++){
            if(magnet[i]!=magnet[i-1]) count++;
        }
    }
    cout<<count;
}