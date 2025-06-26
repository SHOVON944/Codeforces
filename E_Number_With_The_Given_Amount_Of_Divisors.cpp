#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int store = 0;
    int check = 0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            store = i;
            check++;
        }
    }


    return 0;
}