#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){			
        long long x;		
        cin >> x;                
        if(x==1){
            cout << "-1" << endl;
            continue ;
        } else{
            cout << "2" ;
            for(int i=1; i<x; i++){
                 cout << "3" ;			// eikhane 2333333... evabe barte thakle eita 3 dara divided hoina..r 1 dia only vag hoi..but oita vag jabe..so valid
            }
        }
        cout<<endl;
    }
    
    
    return 0;
}