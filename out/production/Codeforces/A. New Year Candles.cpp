#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a>>b;
    int reserve = a;
    while(reserve>=b){
        int new_candles = reserve/b;
        a += new_candles;
        reserve = reserve%b + new_candles;
    }
    cout << a << endl;
    
    return 0;
}