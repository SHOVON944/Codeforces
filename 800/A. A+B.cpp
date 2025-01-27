#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin>>n;
    while (n--) {
        string math;
        cin>>math;
        int plus=math.find('+');
        int a = math[0]-'0';
        int b = math[plus+1]-'0';
        cout<<a+b<<endl;
    }
    return 0;
}