#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;  cin>>x;
    cout<<x/2<<endl;

    if(x%2==0){
        for(int i=1; i<= x/2; i++) cout<<"2 ";
    } else{
        for(int i=2; i<= x/2; i++) cout<<"2 ";       // i=2 newa karon odd tai 3 print korte hobe sejnno
        cout<<"3";
    }

    return 0;
}