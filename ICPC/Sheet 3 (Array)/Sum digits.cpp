#include <iostream>
#include <string>
using namespace std;

int main() {
    long long n;
    cin >> n;
    string digit;
    cin >> digit;
    long long sum = 0;
    for (char store : digit){
        sum += (store - '0'); 
    }
    cout << sum << endl;
    return 0;
}