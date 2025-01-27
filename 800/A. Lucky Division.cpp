#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    bool yes_no = false;
    int checker[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i=0; i<14; i++){
        if(x%checker[i]==0){
            yes_no = true;
            break;
        }
    }
    if(yes_no) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}