#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin >> a>>b>>n;
        int operations = 0;
        while(max(a, b)<=n){
            if(a>b) swap(a,b);
            a += b;
            operations++;
        }
        cout<<operations<<endl;
    }
    
    return 0;
}