#include<iostream>
using namespace std;
 
int main()
{
    long long A,B,C,D,multiple,last_2digit;
    cin>>A>>B>>C>>D;
    multiple = A*B*C*D;
    last_2digit = multiple%100;
    cout<<last_2digit;
    return 0;
}