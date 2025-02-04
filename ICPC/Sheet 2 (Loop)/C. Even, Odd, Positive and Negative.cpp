#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;
    for(int i=1; i<=n; i++){
        cin>>x;
        if(x%2==0) even++;
        if(x%2!=0) odd++;
        if(x>0) positive++;
        if(x<0) negative++;
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;

    return 0;
}