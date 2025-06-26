#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<2020){
            cout<<"NO"<<endl;
            continue;
        }
        int a = n%2020; // 2021 = 2020+1..sejnno amra 2020 dia n k vag dile vagses pabo.jdi vagsesh 1 hoi thle last er 
        int b = n/2021;        // vag ta 2020 na 2021 hobe r 0 hole last er vagseh 2020..
        if(a<=b) cout<<"YES"<<endl;  //nhle others number -> NO print
        else cout<<"NO"<<endl;
    }

    return 0;
}