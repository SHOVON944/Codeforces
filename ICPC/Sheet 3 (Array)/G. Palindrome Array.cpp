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
    bool isPalindrome = true;
    for(int i=0; i<n/2; i++){
        if(arr[i] != arr[n-i-1]){ //n-i-1 korte hocce karon nei korle n-0 hcce kintu lagbe n-1
            isPalindrome  = false;
            break;
        }
    }
    if(isPalindrome) cout<<"YES";
    else cout<<"NO";
    return 0;
}