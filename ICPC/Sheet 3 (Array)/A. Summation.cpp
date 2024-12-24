#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long arr[n];
    long long sum = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum<0) cout<<-sum;
    else cout<<sum;
    return 0;
}