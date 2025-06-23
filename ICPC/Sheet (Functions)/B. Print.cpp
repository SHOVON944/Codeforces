#include<iostream>
using namespace std;

void print_call(int a){
    for(int i=1; i<=a; i++){
        cout<<i;
        if(i<a) cout<<" ";
    }
}

int main()
{
    int x;
    cin>>x;
    print_call(x);
    return 0;
}