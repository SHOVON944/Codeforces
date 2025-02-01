#include<iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        long long sum = 0;
        while(x>0){
            long long mod = x%10;
            sum = sum + mod;
            x/=10;
        }
        cout<<sum<<endl;
    }
    return 0;
}