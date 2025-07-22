#include<iostream>
using namespace std;

int main()
{
    long long limark,bob;
    cin>>limark>>bob;
    long  long count=0;
    while(1){
        limark*=3;
        bob*=2;
        count++;
        if(limark>bob) break;
    }
    cout<<count;
    return 0;
}