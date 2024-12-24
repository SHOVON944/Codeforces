#include <iostream>
using namespace std;

bool checkPrime(int number){
    if(number<=1) return false;  
    for (int i=2; i*i<=number; i++) {
        if(number%i==0) return false; 
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    for(int i=2; i<=n; i++) {
        if(checkPrime(i)) {
            cout<< i << " ";
        }
    }
    return 0;
}