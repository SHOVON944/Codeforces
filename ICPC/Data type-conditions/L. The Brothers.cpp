#include<iostream>
using namespace std;

int main()
{
    string F1;
    string S1;
    string F2;
    string S2;
    cin>>F1>>S1>>F2>>S2;
    if(S1 == S2){
        cout<<"ARE Brothers"<<endl;
    } else{
        cout<<"NOT"<<endl;
    }
    return 0;
}