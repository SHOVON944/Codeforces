#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int num[n];
    int reverse[n];
    int i,j;
    for(i=0; i<n; i++){
        cin>>num[i];
    }
    for(i=0,j=n-1; i<n;  i++,j--){
        reverse[j] = num[i];
    }
    for(i=0; i<n; i++){
        cout<<reverse[i]<<" ";
    }
    return 0;
}