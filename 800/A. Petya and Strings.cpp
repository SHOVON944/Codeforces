#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string first,second;
    cin>>first>>second;
    int size = first.size();
    for(int i=0; i<size; i++){
        char c1 = tolower(first[i]);
        char c2 = tolower(second[i]);

        if(c1>c2){
            cout<<"1";
            return 0;
        } else if(c1<c2){
            cout<<"-1";
            return 0;
        }
    }
    cout<<"0";
    
    return 0;
}