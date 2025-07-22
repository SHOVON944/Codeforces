#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;	cin >> t;
    while(t--){
        long long a, b;	cin>>a>>b;
        if((a==0	&&	b==0)	||	(a==0)) cout << 1 << endl;
        else cout << a + 2*b +1 << endl;
    }
    
    return 0;
}