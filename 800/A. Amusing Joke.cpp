#include<bits/stdc++.h>
using namespace std;

int main()
{
    string first, second, final;
    cin>>first>>second>>final;

    string check_final = first + second;
    sort(check_final.begin(), check_final.end());
    sort(final.begin(), final.end());
    if(check_final == final) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}