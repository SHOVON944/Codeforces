#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n, x;
        long long previous = -1;
        long long minCounter = 0;
        cin>>n;
        while(n--){
            cin>>x;
            if(previous>x){
                minCounter = max(minCounter, previous);
            }
            previous = x;
        }
        cout<<minCounter<<endl;
    }

    return 0;
}