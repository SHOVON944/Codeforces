#include<iostream>
#include<bitset>
#include<string>
using namespace std;
 
int main()
{
    int x;
    cin>>x;
    bitset<32>binary(x);
    string bina = binary.to_string();
    int count = 0;
    for(char &ch : bina){
        if(ch=='1') count++;
    }
    cout <<count;
 
    return 0;
}