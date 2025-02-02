#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long l1,r1,l2,r2,left,right;
    cin>>l1>>r1>>l2>>r2;
    right = min(r1,r2);
    left = max(l1,l2);
    if(left<=right) cout<<left<<" "<<right;
    else cout<<"-1";

    return 0;
}