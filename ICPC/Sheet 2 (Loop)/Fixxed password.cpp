#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(1){
        if(n==1999){
            cout<<"Correct";
            break;
        } else{
            cout<<"Wrong"<<endl;
            cin>>n;
        }
    }
    return 0;
}