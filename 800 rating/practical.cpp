#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        long long x;
        cin>>x;
        long long coins = 1;
        while(x>3){
            x/=4;
            coins = coins*2;
        }
        cout<<coins<<endl;
    }
    return 0;
}