#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n%2!=0) cout << "-1" << endl;
        else{
            if(n==2) cout << "-1" << endl;
            else if(n%4==0  &&  n%6==0) cout<<n/6<<" "<<n/4<<endl;
            else if(n%4==0) cout << "1"<<" 1" << endl;
            else if(n%6==0) cout << "1"<<" 1" << endl;
        }
    }
    
    return 0;
}