#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int check_min = (n+1)/2;        // ei formula dia mid position o ber kora jai(Eita ei problem er part na)

    while(check_min<=n){
        if(check_min%m==0){
            cout<<check_min;
            return 0;
        }
        check_min++;
    }
    cout<<-1;

    return 0;
}