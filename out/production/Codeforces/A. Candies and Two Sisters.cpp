#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n>0){
        long long x;
        cin >>x;
        if(x>2){
            cout<<(x-1)/2<<endl;
        } else{
            cout<<"0"<<endl;
        }
        n--;
    }
    return 0;
}