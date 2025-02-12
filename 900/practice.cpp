#include<bits/stdc++.h>
using namespace std;


    // store prefixSum
void prefixSum(int arr[], int prefix[], int n){
    prefix[0] = arr[0];         // store 1st index( 0th index)
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
}

    //  sum the range value
int rangeSum(int prefix[], int l, int h){
    if(l==0) return prefix[h];
    else return prefix[h] - prefix[l-1];
}



int main()
{
    int n;
    cout<<"Enter array size : ";
    cin>>n;

    int arr[n], prefix[n];

    cout<<"Enter "<<n<<"Elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // store prefix sum through function call
    prefixSum(arr, prefix, n);

    // input range(l -> lowest, h -> highest)
    int l, h;
    cout<<"Enter range(l:lowest, h:highest): ";
    cin>>l>>h;

    int sum = rangeSum(prefix, l, h);

    cout<<"Sum from index "<<l<<" to "<<h<<" is: "<<sum;

    return 0;
}