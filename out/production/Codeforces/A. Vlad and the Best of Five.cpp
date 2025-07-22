#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;   cin >> t;
    while(t--){
        string AB;  cin>>AB;

        int A_count = 0;
        int B_count = 0;
        for(char ch: AB){
            if(ch =='A') A_count++;
            else B_count++;
        }
        if(A_count>B_count) cout<<"A"<<endl;
        else cout<<"B"<<endl;
    }

    return 0;
}