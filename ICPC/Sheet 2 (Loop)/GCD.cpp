#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int gcd=0;
    if(n1>n2){
        swap(n1,n2);
    }
    for(int i=1; i<=n1; i++){
        if(n1%i==0  &&  n2%i==0){
            gcd=i;
        }
    }
    cout << gcd << endl;
    return 0;
}