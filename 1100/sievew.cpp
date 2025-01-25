#include<iostream>
using namespace std;

int main()
{
    int n,x,need_taxis;
    cin>>n;
    int one=0,two=0,three=0,four=0;
    for(int i=1; i<=n; i++){
        cin>>x;
        if(x==4) four++;
        else if (x==3) three++;
        else if (x==2) two++;
        else if (x==1) one++;
    }

    need_taxis = four;

    need_taxis += three;

    if(one>=three) one -= three;
    else one = 0;

    need_taxis += two/2;
    if(two%2!=0){
        need_taxis++;
        if(one>=2) one -= 2;
        else one = 0;
    }

    if(one>0) need_taxis += (one+3)/4;

    cout<<need_taxis<<endl;

    return 0;
}