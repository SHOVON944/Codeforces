#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
    float a;
    cin >> a;
    float n = 360/(180-a);	        // main law, a=((n-2)*180/n,  eikhane n berar( বেড়াঁ)  number...r a hcce angle
    if(fmod(n,1.0)==0.0){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
}
    return 0;
}