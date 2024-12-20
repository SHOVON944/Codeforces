#include <iostream>
using namespace std;

bool logic(int a){
    if(a%33==0) return true;
    while(a>=33){
        if(a%100==66  ||  a%100==33) {
            a = a-33;
        } else{
            return false;
        }
    }
    return a==0;
}

int main()
{
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(logic(x)){
            cout <<"YES"<< endl;
        } else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}