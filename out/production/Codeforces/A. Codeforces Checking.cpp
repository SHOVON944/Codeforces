#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        char codeforces;
        cin>>codeforces;
        if(codeforces=='c'  ||  codeforces=='o'  ||  codeforces=='d'  ||  codeforces=='e'  ||  codeforces=='f'  ||  codeforces=='o'  ||  codeforces=='r'  ||  codeforces=='c'  ||  codeforces=='e'  ||  codeforces=='s'){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}