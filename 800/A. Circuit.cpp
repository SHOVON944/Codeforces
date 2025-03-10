#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int circuit[2*n];
        for(int i=0;i<2*n; i++){
            cin>>circuit[i];
        }
        sort(circuit, circuit+2*n);
        int amount_zero = count(circuit, circuit+2*n,0);
        int amount_one = 2*n - amount_zero;
        if(amount_one>amount_zero) swap(amount_one, amount_zero);
        if(amount_zero%2==0){
            cout << "0 "<< amount_one<< endl;
        } else{
            cout << "1 " <<amount_one<< endl;
        }
    }
    
    return 0;
}