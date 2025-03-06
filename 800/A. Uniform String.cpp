#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){

    int n, k;
    cin>>n>>k;
    string uniform;
    int x = k-1;
        for(int i=1; i<=n; i++){
            uniform.push_back(char('a'+ x));
            if(x!=0){
                x--;
            } else{
                x=k-1;
            }
        }
        cout<<uniform<<endl;
    }
    return 0;
}