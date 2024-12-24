#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    char operation, equal;
    cin >> a >> operation >> b >> equal >> c;
    if(operation=='+'){
        if(a+b==c){
            cout<<"Yes"<<endl;
        } else{
            cout<<a+b<<endl;
        }
    } else if(operation=='-'){
        if(a-b==c){
            cout<<"Yes"<<endl;
        } else{
            cout<<a-b<<endl;
        }
    } else if(operation=='*'){
        if(a*b==c){
            cout<<"Yes"<<endl;
        } else{
            cout<<a*b<<endl;
        }
    }
    return 0;
}
