#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long x;
        cin >> x;
        if(x==1    ||	x==4) cout << "2" << endl;
        else if(x%3==0) cout << x/3 << endl;
        else cout << (x/3)+1 << endl;
    }
    
    return 0;
}