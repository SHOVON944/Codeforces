#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double total_passenger = 0;
    while(n--){
        int man;
        cin>>man;
        total_passenger+=man;
    }
    long long need_taxi = ceil(total_passenger/4);
    cout<<need_taxi<<endl;
    return 0;
}