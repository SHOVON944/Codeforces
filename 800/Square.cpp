#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int x[4], y[4];
        int maximum;
        int minimum;
        for(int i=0; i<4; i++){
            cin >> x[i]>>y[i];
        }
        maximum = max(x[0],max(x[1], max(x[2], x[3])));
        minimum = min(x[0], min(x[1], min(x[2], x[3])));
            
        int square = pow(abs(maximum - minimum),2);
        cout << square<< endl;
    }
    
    return 0;
}