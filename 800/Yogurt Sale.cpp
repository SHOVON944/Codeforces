#include<iostream>
using namespace std;

int main()
{

int t;
cin>>t;
while(t--){
    int n, a, b;
    cin >> n>>a>>b;
    if(a*2  > b){
    	if(n%2==0){
      	  cout << (n*b)/2 << endl;
        } else{
    		cout << (((n-1)*b)/2) +a << endl;
        }
    } else{
        cout << n*a << endl;
    }    
}    
    
    return 0;
}