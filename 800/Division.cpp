#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        long long  x;
        cin >> x;
        if(1900<=x) cout << "Division 1"<<endl;
        if(1600<=x  &&  x<=1899) cout << "Division 2"<<endl;
        if(1400<=x  &&  x<=1599) cout << "Division 3"<<endl;
        if( x<=1399) cout << "Division 4"<<endl;
    }
    return 0;
}