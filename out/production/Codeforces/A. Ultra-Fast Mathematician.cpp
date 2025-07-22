#include<iostream>
using namespace std;

int main()
{
    string x,y;
    string store ="";
    cin>>x>>y;
    int size = x.length();
    for(int i=0; i<size; i++){
        if(x[i]!=y[i]){
            store = store + "1";
        } else{
            store = store + "0";
        }
    }
    cout<<store;
    return 0;
}