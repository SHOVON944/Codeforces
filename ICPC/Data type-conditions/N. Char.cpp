#include<iostream>
using namespace std;

int main()
{
    char x;
    char convert;
    cin>>x;
    if (x>64  &&  x<91){
    convert = x+32;
    }
    if(x>96  &&  x<123){
    convert = x-32;
    }
    cout<<convert<<endl;
    return 0;
}