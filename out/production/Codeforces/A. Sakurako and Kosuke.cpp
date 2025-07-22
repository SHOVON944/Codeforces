#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int count = 0;
        int i = 1;
        while(true){
            if(i%2!=0){
            	count -= (2*i -1);
                if(abs(count)>n){
                    cout << "Sakurako" << endl;
                    break;
                }
            } else{
                count += (2*i-1);
                if(abs(count)>n){
                    cout << "Kosuke" << endl;
                    break;
                }
            }
            i++;
        }
    }
    
    return 0;
}