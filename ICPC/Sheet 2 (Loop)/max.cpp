#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maximum = 0;
    for(int i=0; i<n; i++){
        maximum = max(arr[i],maximum);
    }
    cout<<maximum;
    return 0;
}