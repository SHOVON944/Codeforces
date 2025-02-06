#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int low = arr[0];
    int position = 1;
    for(int i=1; i<n; i++){
        if(low>arr[i]){
            low = arr[i];
            position = i+1;
        }
    }
    cout<<low<<" "<<position;
}