#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    if(n>1){
        for(int i=1; i<=n; i++){
            if(i%2==0) cout<<i<<endl;
        }
    } else{
        cout<<"-1";
    }

    return 0;
}