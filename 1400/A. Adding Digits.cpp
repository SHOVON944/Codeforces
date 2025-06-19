#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    bool check = false;
    
    for(int i=0; i<10; i++){
        int add_check = a*10 +i;
        if(add_check%b==0){
            a= add_check;
            check = true;
            break;
        }
    }
    if(!check){
    	cout << "-1" << endl; 
        return 0;
    } else{
        cout<<a;
        for(int i=1;i<n; i++){        // (n-1) porjonto colbe karon uporer for loop e already ekta digit  add hoice 1 bar loop ghure sejnno n-1
        	cout<<"0";
        }
    }
    
    return 0;
}